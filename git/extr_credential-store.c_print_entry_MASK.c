
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {char* username; char* password; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(struct credential *VAR_0)
{
 FUNC_0("username=%s\n", VAR_0->username);
 FUNC_0("password=%s\n", VAR_0->password);
}
