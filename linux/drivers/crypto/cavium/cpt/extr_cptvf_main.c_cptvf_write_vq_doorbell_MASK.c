
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbell_cnt; } ;
union cptx_vqx_doorbell {int u; TYPE_1__ s; } ;
typedef int u32 ;
struct cpt_vf {int reg_base; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct cpt_vf *VAR_0, u32 VAR_1)
{
 union cptx_vqx_doorbell VAR_2;

 VAR_2.u = FUNC_1(VAR_0->reg_base,
         FUNC_0(0, 0));
 VAR_2.s.dbell_cnt = VAR_1 * 8;
 FUNC_2(VAR_0->reg_base, FUNC_0(0, 0),
   VAR_2.u);
}
