
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xucred {scalar_t__ cr_uid; scalar_t__ cr_ngroups; int cr_groups; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct xucred *VAR_0, struct xucred *VAR_1)
{

 if (VAR_0->cr_uid != VAR_1->cr_uid || VAR_0->cr_ngroups != VAR_1->cr_ngroups)
  return (1);

 FUNC_0(VAR_0->cr_groups, VAR_1->cr_groups, VAR_0->cr_ngroups);
}
