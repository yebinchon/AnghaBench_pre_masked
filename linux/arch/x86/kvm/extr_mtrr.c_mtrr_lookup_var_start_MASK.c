
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtrr_iter {int fixed; int * range; int start; int start_max; struct kvm_mtrr* mtrr_state; } ;
struct kvm_mtrr {int head; } ;


 int FUNC_0 (struct mtrr_iter*) ;
 int * FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mtrr_iter *VAR_1)
{
 struct kvm_mtrr *VAR_2 = VAR_1->mtrr_state;

 VAR_1->fixed = 0;
 VAR_1->start_max = VAR_1->start;
 VAR_1->range = ((void*)0);
 VAR_1->range = FUNC_1(VAR_1->range, &VAR_2->head, VAR_0);

 FUNC_0(VAR_1);
}
