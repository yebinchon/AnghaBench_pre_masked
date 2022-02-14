
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_map_info {int guest_addr; int page; int addr; } ;
struct s390_io_adapter {int swap; } ;
struct kvm_s390_adapter_int {int summary_offset; int summary_addr; int ind_offset; int ind_addr; } ;
struct kvm {int srcu; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ,int ) ;
 struct s390_map_info* FUNC_1 (struct s390_io_adapter*,int ) ;
 int FUNC_2 (struct kvm*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (unsigned long,void*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_1,
      struct s390_io_adapter *VAR_2,
      struct kvm_s390_adapter_int *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 struct s390_map_info *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_3->ind_addr);
 if (!VAR_7)
  return -1;
 VAR_8 = FUNC_3(VAR_7->page);
 VAR_4 = FUNC_0(VAR_7->addr, VAR_3->ind_offset, VAR_2->swap);
 FUNC_4(VAR_4, VAR_8);
 VAR_6 = FUNC_6(&VAR_1->srcu);
 FUNC_2(VAR_1, VAR_7->guest_addr >> VAR_0);
 FUNC_5(VAR_7->page);
 VAR_7 = FUNC_1(VAR_2, VAR_3->summary_addr);
 if (!VAR_7) {
  FUNC_7(&VAR_1->srcu, VAR_6);
  return -1;
 }
 VAR_8 = FUNC_3(VAR_7->page);
 VAR_4 = FUNC_0(VAR_7->addr, VAR_3->summary_offset,
     VAR_2->swap);
 VAR_5 = FUNC_8(VAR_4, VAR_8);
 FUNC_2(VAR_1, VAR_7->guest_addr >> VAR_0);
 FUNC_5(VAR_7->page);
 FUNC_7(&VAR_1->srcu, VAR_6);
 return VAR_5 ? 0 : 1;
}
