
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_page {int unsync_child_bitmap; scalar_t__ unsync_children; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_mmu_page *VAR_0, int VAR_1)
{
 --VAR_0->unsync_children;
 FUNC_0((int)VAR_0->unsync_children < 0);
 FUNC_1(VAR_1, VAR_0->unsync_child_bitmap);
}
