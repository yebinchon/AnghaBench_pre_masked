
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ae; int se; } ;
union cptx_pf_constants {TYPE_1__ s; int u; int member_0; } ;
struct cpt_device {int max_ae_cores; int max_se_cores; int reg_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpt_device *VAR_0)
{
 union cptx_pf_constants VAR_1 = {0};

 VAR_1.u = FUNC_1(VAR_0->reg_base, FUNC_0(0));
 VAR_0->max_se_cores = VAR_1.s.se;
 VAR_0->max_ae_cores = VAR_1.s.ae;
}
