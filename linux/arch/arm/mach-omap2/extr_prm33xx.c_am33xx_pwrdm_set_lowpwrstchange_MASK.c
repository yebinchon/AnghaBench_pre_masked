
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int pwrstctrl_offs; int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct powerdomain *VAR_2)
{
 FUNC_0(VAR_0,
    (1 << VAR_1),
    VAR_2->prcm_offs, VAR_2->pwrstctrl_offs);
 return 0;
}
