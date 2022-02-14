
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct intel_vgpu {TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {unsigned long (* get_pfn ) (struct intel_gvt_gtt_entry*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,int) ;int (* test_present ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int type; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_4__ {TYPE_1__ gtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;




 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct intel_vgpu*,unsigned long,unsigned long,int*) ;
 int FUNC_4 (struct intel_vgpu*,struct intel_gvt_gtt_entry*) ;
 int FUNC_5 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_6 (struct intel_vgpu*,struct intel_vgpu_ppgtt_spt*,unsigned long,struct intel_gvt_gtt_entry*) ;
 int FUNC_7 (struct intel_vgpu*,struct intel_vgpu_ppgtt_spt*,unsigned long,struct intel_gvt_gtt_entry*) ;
 int FUNC_8 (struct intel_gvt_gtt_entry*) ;
 unsigned long FUNC_9 (struct intel_gvt_gtt_entry*) ;
 int FUNC_10 (struct intel_gvt_gtt_entry*,int) ;

__attribute__((used)) static int FUNC_11(struct intel_vgpu *VAR_5,
 struct intel_vgpu_ppgtt_spt *VAR_6, unsigned long VAR_7,
 struct intel_gvt_gtt_entry *VAR_8)
{
 struct intel_gvt_gtt_pte_ops *VAR_9 = VAR_5->gvt->gtt.pte_ops;
 struct intel_gvt_gtt_entry VAR_10 = *VAR_8;
 unsigned long VAR_11, VAR_12 = VAR_4;
 dma_addr_t VAR_13;
 int VAR_14;

 if (!VAR_9->test_present(VAR_8))
  return 0;

 VAR_11 = VAR_9->get_pfn(VAR_8);

 switch (VAR_8->type) {
 case 129:
  FUNC_1("shadow 4K gtt entry\n");
  break;
 case 128:
  FUNC_1("shadow 64K gtt entry\n");





  return FUNC_7(VAR_5, VAR_6, VAR_7, &VAR_10);
 case 130:
  FUNC_1("shadow 2M gtt entry\n");
  VAR_14 = FUNC_4(VAR_5, VAR_8);
  if (VAR_14 == 0)
   return FUNC_6(VAR_5, VAR_6, VAR_7, &VAR_10);
  else if (VAR_14 < 0)
   return VAR_14;
  VAR_12 = VAR_2;
  break;
 case 131:
  FUNC_2("GVT doesn't support 1GB entry\n");
  return -VAR_0;
 default:
  FUNC_0(1);
 };


 VAR_14 = FUNC_3(VAR_5, VAR_11, VAR_12,
            &VAR_13);
 if (VAR_14)
  return -VAR_1;

 VAR_9->set_pfn(&VAR_10, VAR_13 >> VAR_3);
 FUNC_5(VAR_6, &VAR_10, VAR_7);
 return 0;
}
