
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cptx_pf_exe_bist_status {int u; int member_0; } ;
typedef int u64 ;
struct cpt_device {int reg_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u64 FUNC_2(struct cpt_device *VAR_0)
{
 union cptx_pf_exe_bist_status VAR_1 = {0};

 VAR_1.u = FUNC_1(VAR_0->reg_base,
        FUNC_0(0));

 return VAR_1.u;
}
