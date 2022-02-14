
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int * word; } ;
struct kvm_s390_gisa {TYPE_1__ u64; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_s390_gisa *VAR_0)
{
 u64 VAR_1, VAR_2;

 do {
  VAR_1 = FUNC_0(VAR_0->u64.word[0]);
  VAR_2 = VAR_1 & ~(0xffUL << 24);
 } while (FUNC_1(&VAR_0->u64.word[0], VAR_1, VAR_2) != VAR_1);
}
