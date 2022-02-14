
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cont_err; int size; } ;
union cptx_pf_qx_ctl {int u; TYPE_1__ s; } ;
typedef int u32 ;
struct cpt_device {int reg_base; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cpt_device *VAR_0, int VAR_1, u32 VAR_2)
{
 union cptx_pf_qx_ctl VAR_3;

 VAR_3.u = FUNC_1(VAR_0->reg_base, FUNC_0(0, VAR_1));
 VAR_3.s.size = VAR_2;
 VAR_3.s.cont_err = 1;
 FUNC_2(VAR_0->reg_base, FUNC_0(0, VAR_1), VAR_3.u);
}
