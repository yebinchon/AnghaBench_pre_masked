
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rm_eo; scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 scalar_t__ FUNC_3 (int *,char const*,size_t,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char const*,size_t) ;
 scalar_t__ FUNC_8 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_2, int *VAR_3, int *VAR_4, char* VAR_5)
{
 regex_t VAR_6;
 regmatch_t VAR_7[4];
 char *VAR_8, *VAR_9;
 const char *VAR_10 = "^([0-9]+)(\\.[0-9]+)?([A-Za-z]+)?$";
 int VAR_11;
 size_t VAR_12, VAR_13;

 VAR_11 = -1;
 VAR_13 = 4;
 VAR_8 = VAR_9 = ((void*)0);
 *VAR_4 = *VAR_3 = 0;

 if (FUNC_2(&VAR_6, VAR_10, VAR_0) != 0)
  return (-1);

 if (FUNC_3(&VAR_6, VAR_2, VAR_13, VAR_7, 0) != 0)
  goto end;

 if (VAR_7[0].rm_eo <= VAR_7[0].rm_so)
  goto end;

 if (VAR_7[1].rm_eo <= VAR_7[1].rm_so)
  goto end;

 VAR_12 = VAR_7[1].rm_eo - VAR_7[1].rm_so;
 VAR_9 = FUNC_6((VAR_12 + 1) * sizeof(char));

 FUNC_7(VAR_9, VAR_2 + VAR_7[1].rm_so, VAR_12);
 VAR_9[VAR_12] = '\0';

 VAR_1 = 0;
 *VAR_3 = (size_t) FUNC_8(VAR_9, ((void*)0), 10);
 if (VAR_1 != 0)
  FUNC_0(2, "%s", FUNC_1(11));

 if (VAR_7[2].rm_eo > VAR_7[2].rm_so) {
  VAR_12 = VAR_7[2].rm_eo - VAR_7[2].rm_so - 1;
  VAR_8 = FUNC_6((VAR_12 + 1) * sizeof(char));

  FUNC_7(VAR_8, VAR_2 + VAR_7[2].rm_so + 1, VAR_12);
  VAR_8[VAR_12] = '\0';

  VAR_1 = 0;
  *VAR_4 = (size_t) FUNC_8(VAR_8, ((void*)0), 10);
  if (VAR_1 != 0)
   FUNC_0(2, "%s", FUNC_1(11));
 }

 if (VAR_7[3].rm_eo > VAR_7[3].rm_so) {

  VAR_12 = VAR_7[3].rm_eo - VAR_7[3].rm_so;

  FUNC_7(VAR_5, VAR_2 + VAR_7[3].rm_so, VAR_12);
  VAR_5[VAR_12] = '\0';
 }

 VAR_11 = 0;

end:
 if (VAR_8)
  FUNC_5(VAR_8);
 if (VAR_9)
  FUNC_5(VAR_9);
 FUNC_4(&VAR_6);

 return (VAR_11);
}
