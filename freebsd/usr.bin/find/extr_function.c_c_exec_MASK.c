
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int name; } ;
struct TYPE_8__ {int flags; int e_ppos; int e_pbnum; int e_pnummax; long e_psizemax; int e_pbsize; char** e_argv; char** e_orig; int* e_len; int e_psize; struct TYPE_8__* e_next; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 void* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

PLAN *
FUNC_8(OPTION *VAR_10, char ***VAR_11)
{
 PLAN *VAR_12;
 long VAR_13;
 int VAR_14, VAR_15;
 char **VAR_16, **VAR_17, **VAR_18, *VAR_19;


 if (VAR_10->flags & VAR_1 && VAR_7 & VAR_0)
  FUNC_1(1, "%s: forbidden when the current directory cannot be opened",
      "-execdir");




 VAR_8 = 1;


 VAR_12 = FUNC_3(VAR_10);

 for (VAR_17 = VAR_16 = *VAR_11;; ++VAR_17) {
  if (!*VAR_17)
   FUNC_1(1,
       "%s: no terminating \";\" or \"+\"", VAR_10->name);
  if (**VAR_17 == ';')
   break;
  if (**VAR_17 == '+' && VAR_17 != VAR_16 && FUNC_4(*(VAR_17 - 1), "{}") == 0) {
   VAR_12->flags |= VAR_2;
   break;
  }
 }

 if (VAR_17 == VAR_16)
  FUNC_1(1, "%s: no command specified", VAR_10->name);

 VAR_14 = VAR_17 - *VAR_11 + 1;
 if (VAR_12->flags & VAR_2) {
  VAR_12->e_ppos = VAR_12->e_pbnum = VAR_14 - 2;
  if ((VAR_13 = FUNC_6(VAR_5)) == -1) {
   FUNC_7("sysconf(_SC_ARG_MAX)");
   VAR_13 = VAR_4;
  }
  VAR_13 -= 1024;
  for (VAR_18 = VAR_6; *VAR_18 != ((void*)0); VAR_18++)
   VAR_13 -= FUNC_5(*VAR_18) + 1 + sizeof(*VAR_18);
  VAR_13 -= 1 + sizeof(*VAR_18);






  VAR_12->e_pnummax = VAR_12->flags & VAR_1 ? 1 : VAR_13 / 16;
  VAR_13 -= sizeof(char *) * VAR_12->e_pnummax;
  if (VAR_13 <= 0)
   FUNC_1(1, "no space for arguments");
  VAR_12->e_psizemax = VAR_13;
  VAR_12->e_pbsize = 0;
  VAR_14 += VAR_12->e_pnummax + 1;
  VAR_12->e_next = VAR_9;
  VAR_9 = VAR_12;
 }
 if ((VAR_12->e_argv = FUNC_2(VAR_14 * sizeof(char *))) == ((void*)0))
  FUNC_0(1, ((void*)0));
 if ((VAR_12->e_orig = FUNC_2(VAR_14 * sizeof(char *))) == ((void*)0))
  FUNC_0(1, ((void*)0));
 if ((VAR_12->e_len = FUNC_2(VAR_14 * sizeof(int))) == ((void*)0))
  FUNC_0(1, ((void*)0));

 for (VAR_16 = *VAR_11, VAR_14 = 0; VAR_16 < VAR_17; ++VAR_16, ++VAR_14) {
  VAR_12->e_orig[VAR_14] = *VAR_16;
  if (VAR_12->flags & VAR_2)
   VAR_12->e_pbsize += FUNC_5(*VAR_16) + 1;
  for (VAR_19 = *VAR_16; *VAR_19; ++VAR_19)
   if (!(VAR_12->flags & VAR_2) && VAR_19[0] == '{' &&
       VAR_19[1] == '}') {
    if ((VAR_12->e_argv[VAR_14] =
        FUNC_2(VAR_3)) == ((void*)0))
     FUNC_0(1, ((void*)0));
    VAR_12->e_len[VAR_14] = VAR_3;
    break;
   }
  if (!*VAR_19) {
   VAR_12->e_argv[VAR_14] = *VAR_16;
   VAR_12->e_len[VAR_14] = 0;
  }
 }
 if (VAR_12->flags & VAR_2) {
  VAR_12->e_psize = VAR_12->e_pbsize;
  VAR_14--;
  for (VAR_15 = 0; VAR_15 < VAR_12->e_pnummax; VAR_15++) {
   VAR_12->e_argv[VAR_14] = ((void*)0);
   VAR_12->e_len[VAR_14] = 0;
   VAR_14++;
  }
  VAR_16 = VAR_17;
  goto done;
 }
 VAR_12->e_argv[VAR_14] = VAR_12->e_orig[VAR_14] = ((void*)0);

done: *VAR_11 = VAR_16 + 1;
 return VAR_12;
}
