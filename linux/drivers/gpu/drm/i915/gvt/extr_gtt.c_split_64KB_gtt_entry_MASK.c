
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct intel_vgpu {TYPE_2__* gvt; } ;
struct intel_gvt_gtt_pte_ops {unsigned long (* get_pfn ) (struct intel_gvt_gtt_entry*) ;int (* set_pfn ) (struct intel_gvt_gtt_entry*,int) ;int (* set_64k_splited ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int type; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct TYPE_4__ {TYPE_1__ gtt; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct intel_vgpu*,unsigned long,int ,int*) ;
 int FUNC_3 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 unsigned long FUNC_4 (struct intel_gvt_gtt_entry*) ;
 int FUNC_5 (struct intel_gvt_gtt_entry*) ;
 int FUNC_6 (struct intel_gvt_gtt_entry*,int) ;

__attribute__((used)) static int FUNC_7(struct intel_vgpu *VAR_4,
 struct intel_vgpu_ppgtt_spt *VAR_5, unsigned long VAR_6,
 struct intel_gvt_gtt_entry *VAR_7)
{
 struct intel_gvt_gtt_pte_ops *VAR_8 = VAR_4->gvt->gtt.pte_ops;
 struct intel_gvt_gtt_entry VAR_9 = *VAR_7;
 unsigned long VAR_10;
 dma_addr_t VAR_11;
 int VAR_12, VAR_13;

 FUNC_1("Split 64K gtt entry, index %lu\n", VAR_6);

 FUNC_0(VAR_6 % VAR_0);

 VAR_10 = VAR_8->get_pfn(VAR_7);

 VAR_9.type = VAR_1;
 VAR_8->set_64k_splited(&VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_13 = FUNC_2(VAR_4,
     VAR_10 + VAR_12, VAR_3, &VAR_11);
  if (VAR_13)
   return VAR_13;

  VAR_8->set_pfn(&VAR_9, VAR_11 >> VAR_2);
  FUNC_3(VAR_5, &VAR_9, VAR_6 + VAR_12);
 }
 return 0;
}
