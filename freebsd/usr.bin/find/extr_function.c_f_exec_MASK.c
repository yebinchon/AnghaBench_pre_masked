
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_6__ {char* fts_path; } ;
struct TYPE_5__ {int flags; size_t e_ppos; size_t e_pbnum; scalar_t__* e_len; scalar_t__ e_psize; size_t e_pnummax; scalar_t__ e_psizemax; scalar_t__ e_pbsize; int ** e_argv; int * e_orig; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int **,char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int **) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (int **) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (int,int*,int ) ;
 int FUNC_15 (char*,...) ;

int
FUNC_16(PLAN *VAR_9, FTSENT *VAR_10)
{
 int VAR_11;
 pid_t VAR_12;
 int VAR_13;
 char *VAR_14;

 if (VAR_10 == ((void*)0) && VAR_9->flags & VAR_2) {
  if (VAR_9->e_ppos == VAR_9->e_pbnum)
   return (1);
  VAR_9->e_argv[VAR_9->e_ppos] = ((void*)0);
  goto doexec;
 }


 if ((VAR_9->flags & VAR_1) && (VAR_14 = FUNC_13(VAR_10->fts_path, '/')))

  VAR_14++;
 else
  VAR_14 = VAR_10->fts_path;

 if (VAR_9->flags & VAR_2) {
  if ((VAR_9->e_argv[VAR_9->e_ppos] = FUNC_11(VAR_14)) == ((void*)0))
   FUNC_4(1, ((void*)0));
  VAR_9->e_len[VAR_9->e_ppos] = FUNC_12(VAR_14);
  VAR_9->e_psize += VAR_9->e_len[VAR_9->e_ppos];
  if (++VAR_9->e_ppos < VAR_9->e_pnummax &&
      VAR_9->e_psize < VAR_9->e_psizemax)
   return (1);
  VAR_9->e_argv[VAR_9->e_ppos] = ((void*)0);
 } else {
  for (VAR_11 = 0; VAR_9->e_argv[VAR_11]; ++VAR_11)
   if (VAR_9->e_len[VAR_11])
    FUNC_3(VAR_9->e_orig[VAR_11],
        &VAR_9->e_argv[VAR_11], VAR_14,
        VAR_9->e_len[VAR_11]);
 }

doexec: if ((VAR_9->flags & VAR_3) && !FUNC_10(VAR_9->e_argv))
  return 0;


 FUNC_7(VAR_8);
 FUNC_7(VAR_7);

 switch (VAR_12 = FUNC_8()) {
 case -1:
  FUNC_4(1, "fork");

 case 0:

  if (!(VAR_9->flags & VAR_1) &&
      !(VAR_6 & VAR_0) && FUNC_6(VAR_4)) {
   FUNC_15("chdir");
   FUNC_2(1);
  }
  FUNC_5(VAR_9->e_argv[0], VAR_9->e_argv);
  FUNC_15("%s", VAR_9->e_argv[0]);
  FUNC_2(1);
 }
 if (VAR_9->flags & VAR_2) {
  while (--VAR_9->e_ppos >= VAR_9->e_pbnum)
   FUNC_9(VAR_9->e_argv[VAR_9->e_ppos]);
  VAR_9->e_ppos = VAR_9->e_pbnum;
  VAR_9->e_psize = VAR_9->e_pbsize;
 }
 VAR_12 = FUNC_14(VAR_12, &VAR_13, 0);
 if (VAR_12 != -1 && FUNC_1(VAR_13) && !FUNC_0(VAR_13))
  return (1);
 if (VAR_9->flags & VAR_2) {
  VAR_5 = 1;
  return (1);
 }
 return (0);
}
