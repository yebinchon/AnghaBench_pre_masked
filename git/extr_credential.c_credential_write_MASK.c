
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int password; int username; int path; int host; int protocol; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(const struct credential *VAR_0, FILE *VAR_1)
{
 FUNC_0(VAR_1, "protocol", VAR_0->protocol);
 FUNC_0(VAR_1, "host", VAR_0->host);
 FUNC_0(VAR_1, "path", VAR_0->path);
 FUNC_0(VAR_1, "username", VAR_0->username);
 FUNC_0(VAR_1, "password", VAR_0->password);
}
