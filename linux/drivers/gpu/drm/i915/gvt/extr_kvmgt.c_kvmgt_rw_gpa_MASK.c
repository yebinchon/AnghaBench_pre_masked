
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmgt_guest_info {struct kvm* kvm; } ;
struct kvm {int mm; int srcu; } ;
struct TYPE_2__ {int * mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm*,unsigned long,void*,unsigned long) ;
 int FUNC_2 (struct kvm*,unsigned long,void*,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(unsigned long VAR_3, unsigned long VAR_4,
   void *VAR_5, unsigned long VAR_6, bool VAR_7)
{
 struct kvmgt_guest_info *VAR_8;
 struct kvm *VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12 = VAR_2->mm == ((void*)0);

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 VAR_8 = (struct kvmgt_guest_info *)VAR_3;
 VAR_9 = VAR_8->kvm;

 if (VAR_12) {
  if (!FUNC_3(VAR_9->mm))
   return -VAR_0;
  FUNC_8(VAR_9->mm);
 }

 VAR_10 = FUNC_5(&VAR_9->srcu);
 VAR_11 = VAR_7 ? FUNC_2(VAR_9, VAR_4, VAR_5, VAR_6) :
        FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6);
 FUNC_6(&VAR_9->srcu, VAR_10);

 if (VAR_12) {
  FUNC_7(VAR_9->mm);
  FUNC_4(VAR_9->mm);
 }

 return VAR_11;
}
