
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int helpers; int password; int username; int path; int host; int protocol; } ;


 int FUNC_0 (struct credential*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct credential *VAR_0)
{
 FUNC_1(VAR_0->protocol);
 FUNC_1(VAR_0->host);
 FUNC_1(VAR_0->path);
 FUNC_1(VAR_0->username);
 FUNC_1(VAR_0->password);
 FUNC_2(&VAR_0->helpers, 0);

 FUNC_0(VAR_0);
}
