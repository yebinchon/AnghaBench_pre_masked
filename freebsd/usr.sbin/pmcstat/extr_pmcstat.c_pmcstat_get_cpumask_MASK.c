
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,char**,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, cpuset_t *VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 char *VAR_5;

 FUNC_2(VAR_2);
 VAR_4 = VAR_1;

 do {
  VAR_3 = FUNC_6(VAR_4, &VAR_5, 0);
  if (VAR_3 < 0 || VAR_5 == VAR_4)
   FUNC_4(VAR_0,
       "ERROR: Illegal CPU specification \"%s\".",
       VAR_1);
  FUNC_1(VAR_3, VAR_2);
  VAR_4 = VAR_5 + FUNC_5(VAR_5, ", \t");
 } while (*VAR_4);
 FUNC_3(!FUNC_0(VAR_2));
}
