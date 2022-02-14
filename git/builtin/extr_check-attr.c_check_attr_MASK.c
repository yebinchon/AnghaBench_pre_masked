
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,struct attr_check*) ;
 int FUNC_2 (int *,char*,struct attr_check*) ;
 int FUNC_3 (struct attr_check*,char const*) ;
 char* FUNC_4 (char const*,int ,char const*) ;
 int FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const char *VAR_1,
         struct attr_check *VAR_2,
         int VAR_3,
         const char *VAR_4)
{
 char *VAR_5 =
  FUNC_4(VAR_1, VAR_1 ? FUNC_5(VAR_1) : 0, VAR_4);

 if (VAR_3) {
  FUNC_1(&VAR_0, VAR_5, VAR_2);
 } else {
  FUNC_2(&VAR_0, VAR_5, VAR_2);
 }
 FUNC_3(VAR_2, VAR_4);

 FUNC_0(VAR_5);
}
