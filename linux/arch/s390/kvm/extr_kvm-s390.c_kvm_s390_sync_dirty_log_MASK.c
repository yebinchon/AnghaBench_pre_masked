
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {scalar_t__ base_gfn; scalar_t__ npages; } ;
struct TYPE_2__ {struct gmap* gmap; } ;
struct kvm {TYPE_1__ arch; } ;
struct gmap {int dummy; } ;
typedef scalar_t__ gfn_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (scalar_t__) ;
 unsigned long FUNC_5 (struct kvm_memory_slot*,scalar_t__) ;
 int FUNC_6 (struct gmap*,int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (struct kvm*,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(struct kvm *VAR_3,
        struct kvm_memory_slot *VAR_4)
{
 int VAR_5;
 gfn_t VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;
 struct gmap *VAR_10 = VAR_3->arch.gmap;
 FUNC_0(VAR_1, VAR_0);


 VAR_6 = VAR_4->base_gfn;
 VAR_7 = VAR_4->base_gfn + VAR_4->npages;
 for (; VAR_6 <= VAR_7; VAR_6 += VAR_0) {
  VAR_8 = FUNC_4(VAR_6);
  VAR_9 = FUNC_5(VAR_4, VAR_6);
  if (FUNC_7(VAR_9))
   continue;

  FUNC_1(VAR_1, VAR_0);
  FUNC_6(VAR_10, VAR_1, VAR_8, VAR_9);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (FUNC_9(VAR_5, VAR_1))
    FUNC_8(VAR_3, VAR_6 + VAR_5);
  }

  if (FUNC_3(VAR_2))
   return;
  FUNC_2();
 }
}
