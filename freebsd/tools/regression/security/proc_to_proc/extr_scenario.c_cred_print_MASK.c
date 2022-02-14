
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cr_euid; int cr_ruid; int cr_svuid; int cr_issetugid; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, struct cred *VAR_1)
{

 FUNC_0(VAR_0, "(e:%d r:%d s:%d P_SUGID:%d)", VAR_1->cr_euid,
     VAR_1->cr_ruid, VAR_1->cr_svuid, VAR_1->cr_issetugid);
}
