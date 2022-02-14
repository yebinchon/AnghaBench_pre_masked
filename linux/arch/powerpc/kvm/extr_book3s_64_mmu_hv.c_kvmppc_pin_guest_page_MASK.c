
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_memory_slot {int flags; } ;
struct kvm {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int,int ,struct page**) ;
 unsigned long FUNC_1 (struct kvm_memory_slot*,unsigned long) ;
 struct kvm_memory_slot* FUNC_2 (struct kvm*,unsigned long) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

void *FUNC_6(struct kvm *VAR_4, unsigned long VAR_5,
       unsigned long *VAR_6)
{
 struct kvm_memory_slot *VAR_7;
 unsigned long VAR_8 = VAR_5 >> VAR_2;
 struct page *VAR_9, *VAR_10[1];
 int VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(&VAR_4->srcu);
 VAR_7 = FUNC_2(VAR_4, VAR_8);
 if (!VAR_7 || (VAR_7->flags & VAR_1))
  goto err;
 VAR_12 = FUNC_1(VAR_7, VAR_8);
 VAR_11 = FUNC_0(VAR_12, 1, VAR_0, VAR_10);
 if (VAR_11 < 1)
  goto err;
 VAR_9 = VAR_10[0];
 FUNC_5(&VAR_4->srcu, VAR_14);

 VAR_13 = VAR_5 & (VAR_3 - 1);
 if (VAR_6)
  *VAR_6 = VAR_3 - VAR_13;
 return FUNC_3(VAR_9) + VAR_13;

 err:
 FUNC_5(&VAR_4->srcu, VAR_14);
 return ((void*)0);
}
