
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_zstate {int dummy; } ;
typedef int code_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct s_zstate*) ;
 int VAR_3 ;
 int FUNC_2 (struct s_zstate*,int ) ;
 char VAR_4 ;

__attribute__((used)) static int
FUNC_3(void *VAR_5)
{
 struct s_zstate *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5;
 if (VAR_4 == 'w') {
  if (FUNC_2(VAR_6, (code_int) VAR_1) == -1) {
   (void)FUNC_0(VAR_2);
   FUNC_1(VAR_6);
   return (-1);
  }
  VAR_3++;
  if (FUNC_2(VAR_6, (code_int) - 1) == -1) {
   (void)FUNC_0(VAR_2);
   FUNC_1(VAR_6);
   return (-1);
  }
 }
 VAR_7 = FUNC_0(VAR_2) == VAR_0 ? -1 : 0;
 FUNC_1(VAR_6);
 return (VAR_7);
}
