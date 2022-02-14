
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct kvm_s390_cmma_log {unsigned long start_gfn; unsigned long count; } ;
struct kvm {int mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned long,unsigned long*) ;
 unsigned long FUNC_1 (struct kvm*,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_1, struct kvm_s390_cmma_log *VAR_2,
         u8 *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7 = VAR_2->start_gfn;

 VAR_2->count = 0;
 while (VAR_2->count < VAR_4) {
  VAR_6 = FUNC_1(VAR_1, VAR_7);




  if (FUNC_2(VAR_6))
   return VAR_2->count ? 0 : -VAR_0;
  if (FUNC_0(VAR_1->mm, VAR_6, &VAR_5) < 0)
   VAR_5 = 0;
  VAR_3[VAR_2->count++] = (VAR_5 >> 24) & 0x43;
  VAR_7++;
 }

 return 0;
}
