
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int password; int username; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const struct credential *VAR_1)
{

 FUNC_0(VAR_0, "username", VAR_1->username);
 FUNC_0(VAR_0, "password", VAR_1->password);
}
