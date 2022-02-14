
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct key_specs {size_t f2; size_t f1; size_t c2; size_t c1; int pos2b; int pos1b; int sm; } ;
typedef size_t regoff_t ;
struct TYPE_3__ {scalar_t__ rm_eo; scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 int FUNC_0 (char const,int*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,char const*,int ) ;
 scalar_t__ FUNC_4 (int *,char const*,size_t,TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (char*,char const*,size_t) ;
 scalar_t__ FUNC_10 (char*,int *,int) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_2, struct key_specs *VAR_3, bool *VAR_4, bool VAR_5)
{
 regmatch_t VAR_6[4];
 regex_t VAR_7;
 char *VAR_8, *VAR_9;
 const char *VAR_10 = "^([0-9]+)(\\.[0-9]+)?([bdfirMngRhV]+)?$";
 size_t VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = -1;
 VAR_12 = 4;
 VAR_8 = VAR_9 = ((void*)0);

 if (FUNC_3(&VAR_7, VAR_10, VAR_0) != 0)
  return (-1);

 if (FUNC_4(&VAR_7, VAR_2, VAR_12, VAR_6, 0) != 0)
  goto end;

 if (VAR_6[0].rm_eo <= VAR_6[0].rm_so)
  goto end;

 if (VAR_6[1].rm_eo <= VAR_6[1].rm_so)
  goto end;

 VAR_11 = VAR_6[1].rm_eo - VAR_6[1].rm_so;
 VAR_9 = FUNC_8((VAR_11 + 1) * sizeof(char));

 FUNC_9(VAR_9, VAR_2 + VAR_6[1].rm_so, VAR_11);
 VAR_9[VAR_11] = '\0';

 if (VAR_5) {
  VAR_1 = 0;
  VAR_3->f2 = (size_t) FUNC_10(VAR_9, ((void*)0), 10);
  if (VAR_1 != 0)
   FUNC_1(2, "-k");
  if (VAR_3->f2 == 0) {
   FUNC_11("%s",FUNC_2(5));
   goto end;
  }
 } else {
  VAR_1 = 0;
  VAR_3->f1 = (size_t) FUNC_10(VAR_9, ((void*)0), 10);
  if (VAR_1 != 0)
   FUNC_1(2, "-k");
  if (VAR_3->f1 == 0) {
   FUNC_11("%s",FUNC_2(5));
   goto end;
  }
 }

 if (VAR_6[2].rm_eo > VAR_6[2].rm_so) {
  VAR_11 = VAR_6[2].rm_eo - VAR_6[2].rm_so - 1;
  VAR_8 = FUNC_8((VAR_11 + 1) * sizeof(char));

  FUNC_9(VAR_8, VAR_2 + VAR_6[2].rm_so + 1, VAR_11);
  VAR_8[VAR_11] = '\0';

  if (VAR_5) {
   VAR_1 = 0;
   VAR_3->c2 = (size_t) FUNC_10(VAR_8, ((void*)0), 10);
   if (VAR_1 != 0)
    FUNC_1(2, "-k");
  } else {
   VAR_1 = 0;
   VAR_3->c1 = (size_t) FUNC_10(VAR_8, ((void*)0), 10);
   if (VAR_1 != 0)
    FUNC_1(2, "-k");
   if (VAR_3->c1 == 0) {
    FUNC_11("%s",FUNC_2(6));
    goto end;
   }
  }
 } else {
  if (VAR_5)
   VAR_3->c2 = 0;
  else
   VAR_3->c1 = 1;
 }

 if (VAR_6[3].rm_eo > VAR_6[3].rm_so) {
  regoff_t VAR_14 = 0;

  for (VAR_14 = VAR_6[3].rm_so; VAR_14 < VAR_6[3].rm_eo; VAR_14++) {
   FUNC_0(VAR_2[VAR_14], VAR_4);
   if (VAR_2[VAR_14] == 'b') {
    if (VAR_5)
     VAR_3->pos2b = 1;
    else
     VAR_3->pos1b = 1;
   } else if (!FUNC_6(&(VAR_3->sm), VAR_2[VAR_14]))
    goto end;
  }
 }

 VAR_13 = 0;

end:

 if (VAR_8)
  FUNC_7(VAR_8);
 if (VAR_9)
  FUNC_7(VAR_9);
 FUNC_5(&VAR_7);

 return (VAR_13);
}
