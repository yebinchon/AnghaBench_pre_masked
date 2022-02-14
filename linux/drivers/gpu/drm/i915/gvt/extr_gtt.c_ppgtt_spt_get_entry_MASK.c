
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gfn; int pde_ips; } ;
struct intel_vgpu_ppgtt_spt {TYPE_2__ guest_page; TYPE_3__* vgpu; } ;
struct intel_gvt_gtt_pte_ops {int (* get_entry ) (void*,struct intel_gvt_gtt_entry*,unsigned long,int,int,TYPE_3__*) ;} ;
struct intel_gvt_gtt_entry {int val64; int type; } ;
struct TYPE_4__ {struct intel_gvt_gtt_pte_ops* pte_ops; } ;
struct intel_gvt {TYPE_1__ gtt; } ;
struct TYPE_6__ {struct intel_gvt* gvt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,unsigned long,int ) ;
 int FUNC_4 (void*,struct intel_gvt_gtt_entry*,unsigned long,int,int,TYPE_3__*) ;
 int FUNC_5 (struct intel_gvt_gtt_pte_ops*,struct intel_gvt_gtt_entry*,int) ;

__attribute__((used)) static inline int FUNC_6(
  struct intel_vgpu_ppgtt_spt *VAR_2,
  void *VAR_3, int VAR_4,
  struct intel_gvt_gtt_entry *VAR_5, unsigned long VAR_6,
  bool VAR_7)
{
 struct intel_gvt *VAR_8 = VAR_2->vgpu->gvt;
 struct intel_gvt_gtt_pte_ops *VAR_9 = VAR_8->gtt.pte_ops;
 int VAR_10;

 VAR_5->type = FUNC_1(VAR_4);

 if (FUNC_0(!FUNC_2(VAR_5->type), "invalid entry type\n"))
  return -VAR_0;

 VAR_10 = VAR_9->get_entry(VAR_3, VAR_5, VAR_6, VAR_7,
   VAR_2->guest_page.gfn << VAR_1,
   VAR_2->vgpu);
 if (VAR_10)
  return VAR_10;

 FUNC_5(VAR_9, VAR_5, VAR_7 ?
       VAR_2->guest_page.pde_ips : 0);

 FUNC_3("read ppgtt entry, spt type %d, entry type %d, index %lu, value %llx\n",
      VAR_4, VAR_5->type, VAR_6, VAR_5->val64);
 return 0;
}
