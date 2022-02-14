
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct mtrr_iter {int mtrr_disabled; int partial_map; int fixed; int * range; void* end; void* start; struct kvm_mtrr* mtrr_state; } ;
struct kvm_mtrr {int dummy; } ;


 int FUNC_0 (struct mtrr_iter*) ;

__attribute__((used)) static void FUNC_1(struct mtrr_iter *VAR_0,
        struct kvm_mtrr *VAR_1, u64 VAR_2, u64 VAR_3)
{
 VAR_0->mtrr_state = VAR_1;
 VAR_0->start = VAR_2;
 VAR_0->end = VAR_3;
 VAR_0->mtrr_disabled = 0;
 VAR_0->partial_map = 0;
 VAR_0->fixed = 0;
 VAR_0->range = ((void*)0);

 FUNC_0(VAR_0);
}
