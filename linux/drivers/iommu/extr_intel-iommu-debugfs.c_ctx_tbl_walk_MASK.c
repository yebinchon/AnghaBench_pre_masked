
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct tbl_walk {int bus; int devfn; struct context_entry* ctx_entry; int * rt_entry; int member_0; } ;
struct seq_file {struct tbl_walk* private; } ;
struct intel_iommu {scalar_t__ reg; int * root_entry; } ;
struct context_entry {int lo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct context_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct context_entry*) ;
 struct context_entry* FUNC_3 (struct intel_iommu*,int,int,int ) ;
 int FUNC_4 (struct seq_file*,int,int) ;
 int FUNC_5 (struct seq_file*) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_3, struct intel_iommu *VAR_4, u16 VAR_5)
{
 struct context_entry *VAR_6;
 u16 VAR_7, VAR_8;
 u64 VAR_9;

 for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
  struct tbl_walk VAR_10 = {0};
  VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_7, 0);
  if (!VAR_6)
   return;

  if (!FUNC_0(VAR_6))
   continue;

  VAR_10.bus = VAR_5;
  VAR_10.devfn = VAR_7;
  VAR_10.rt_entry = &VAR_4->root_entry[VAR_5];
  VAR_10.ctx_entry = VAR_6;
  VAR_3->private = &VAR_10;

  if (FUNC_1(VAR_4->reg + VAR_0) & VAR_1) {
   VAR_9 = VAR_6->lo & VAR_2;
   VAR_8 = FUNC_2(VAR_6);
   FUNC_4(VAR_3, VAR_9, VAR_8);
   continue;
  }

  FUNC_5(VAR_3);
 }
}
