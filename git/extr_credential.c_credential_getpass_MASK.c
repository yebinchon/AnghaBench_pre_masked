
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {void* password; void* username; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,struct credential*,int) ;

__attribute__((used)) static void FUNC_1(struct credential *VAR_2)
{
 if (!VAR_2->username)
  VAR_2->username = FUNC_0("Username", VAR_2,
       VAR_0|VAR_1);
 if (!VAR_2->password)
  VAR_2->password = FUNC_0("Password", VAR_2,
       VAR_0);
}
