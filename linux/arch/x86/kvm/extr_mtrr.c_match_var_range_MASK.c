
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mtrr_iter {scalar_t__ end; scalar_t__ start; int partial_map; scalar_t__ start_max; struct kvm_mtrr_range* range; } ;
struct kvm_mtrr_range {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct kvm_mtrr_range*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(struct mtrr_iter *VAR_0,
       struct kvm_mtrr_range *VAR_1)
{
 u64 VAR_2, VAR_3;

 FUNC_1(VAR_1, &VAR_2, &VAR_3);
 if (!(VAR_2 >= VAR_0->end || VAR_3 <= VAR_0->start)) {
  VAR_0->range = VAR_1;






  VAR_0->partial_map |= VAR_0->start_max < VAR_2;


  VAR_0->start_max = FUNC_0(VAR_0->start_max, VAR_3);
  return 1;
 }

 return 0;
}
