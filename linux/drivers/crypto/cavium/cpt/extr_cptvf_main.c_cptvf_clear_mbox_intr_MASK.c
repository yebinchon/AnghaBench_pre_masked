
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mbox; } ;
union cptx_vqx_misc_int {int u; TYPE_1__ s; } ;
struct cpt_vf {int reg_base; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cpt_vf *VAR_0)
{
 union cptx_vqx_misc_int VAR_1;

 VAR_1.u = FUNC_1(VAR_0->reg_base,
     FUNC_0(0, 0));

 VAR_1.s.mbox = 1;
 FUNC_2(VAR_0->reg_base, FUNC_0(0, 0),
   VAR_1.u);
}
