
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_user {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ipmi_user*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;
 struct ipmi_user* VAR_5 ;

__attribute__((used)) static void FUNC_7(int VAR_6)
{
 int VAR_7;
 struct ipmi_user *VAR_8 = VAR_5;

 if (!VAR_8)
  return;

 if (VAR_4 != VAR_6)
  return;


 FUNC_2(&VAR_2);

 VAR_5 = ((void*)0);






 while (FUNC_0(&VAR_3))
  FUNC_3(((void*)0));

 FUNC_4(&VAR_1);


 VAR_7 = FUNC_1(VAR_8);
 if (VAR_7)
  FUNC_6("error unlinking from IPMI: %d\n", VAR_7);


 VAR_0 = 1;

 FUNC_5(&VAR_1);
}
