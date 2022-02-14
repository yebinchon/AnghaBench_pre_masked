
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cr_issetugid; int cr_svuid; int cr_euid; int cr_ruid; } ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct cred *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->cr_ruid, &VAR_0->cr_euid, &VAR_0->cr_svuid);
 if (VAR_1)
  return (VAR_1);

 VAR_0->cr_issetugid = FUNC_1();

 return (0);
}
