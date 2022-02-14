
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int context; int pwrstctrl_offs; int prcm_offs; int pwrstst_offs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct powerdomain*) ;

__attribute__((used)) static void FUNC_3(struct powerdomain *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->prcm_offs,
     VAR_1->pwrstst_offs);

 FUNC_1(VAR_1->context, VAR_1->prcm_offs,
        VAR_1->pwrstctrl_offs);


 VAR_2 &= VAR_0;
 VAR_3 = VAR_0 & VAR_1->context;

 if (VAR_2 != VAR_3)
  FUNC_2(VAR_1);
}
