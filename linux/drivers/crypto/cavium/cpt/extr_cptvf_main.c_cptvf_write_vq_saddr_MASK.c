
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cptx_vqx_saddr {int u; } ;
typedef int u64 ;
struct cpt_vf {int reg_base; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpt_vf *VAR_0, u64 VAR_1)
{
 union cptx_vqx_saddr VAR_2;

 VAR_2.u = VAR_1;
 FUNC_1(VAR_0->reg_base, FUNC_0(0, 0), VAR_2.u);
}
