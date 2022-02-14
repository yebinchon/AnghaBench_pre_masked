
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu {TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {int (* get_pfn ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int dummy; } ;
struct TYPE_3__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_4__ {int dev_priv; TYPE_1__ gtt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct intel_vgpu*,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_3,
 struct intel_gvt_gtt_entry *VAR_4)
{
 struct intel_gvt_gtt_pte_ops *VAR_5 = VAR_3->gvt->gtt.pte_ops;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_3->gvt->dev_priv, VAR_1))
  return 0;

 VAR_6 = FUNC_2(VAR_3, VAR_5->get_pfn(VAR_4));
 if (VAR_6 == VAR_2)
  return -VAR_0;

 return FUNC_1(FUNC_3(VAR_6));
}
