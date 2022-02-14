
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int * word; } ;
struct kvm_s390_gisa {TYPE_1__ u64; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct kvm_s390_gisa *VAR_1, u8 VAR_2)
{
 u64 VAR_3, VAR_4;

 do {
  VAR_3 = FUNC_0(VAR_1->u64.word[0]);
  if ((u64)VAR_1 != VAR_3 >> 32)
   return -VAR_0;
  VAR_4 = (VAR_3 & ~0xffUL) | VAR_2;
 } while (FUNC_1(&VAR_1->u64.word[0], VAR_3, VAR_4) != VAR_3);

 return 0;
}
