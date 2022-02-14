
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int mask; } ;
struct kvm_s390_gisa_interrupt {TYPE_1__ alert; TYPE_3__* origin; } ;
struct TYPE_5__ {int * word; } ;
struct TYPE_6__ {TYPE_2__ u64; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline u8 FUNC_2(struct kvm_s390_gisa_interrupt *VAR_0)
{
 u8 VAR_1, VAR_2;
 u64 VAR_3, VAR_4;

 do {
  VAR_3 = FUNC_0(VAR_0->origin->u64.word[0]);
  VAR_2 = FUNC_0(VAR_0->alert.mask);
  VAR_1 = (u8)(VAR_3 >> 24) & VAR_2;
  if (VAR_1)
   return VAR_1;
  VAR_4 = (VAR_3 & ~0xffUL) | VAR_2;
 } while (FUNC_1(&VAR_0->origin->u64.word[0], VAR_3, VAR_4) != VAR_3);

 return 0;
}
