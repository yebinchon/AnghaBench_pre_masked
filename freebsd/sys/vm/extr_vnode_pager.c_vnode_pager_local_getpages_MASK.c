
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getpages_args {int a_rahead; int a_rbehind; int a_count; int a_m; int a_vp; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *) ;

int
FUNC_1(struct vop_getpages_args *VAR_0)
{

 return (FUNC_0(VAR_0->a_vp, VAR_0->a_m, VAR_0->a_count,
     VAR_0->a_rbehind, VAR_0->a_rahead, ((void*)0), ((void*)0)));
}
