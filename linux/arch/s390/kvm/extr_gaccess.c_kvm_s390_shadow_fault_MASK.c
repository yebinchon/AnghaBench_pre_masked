
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union vaddress {unsigned long addr; unsigned long px; } ;
union page_table_entry {unsigned long val; int p; scalar_t__ z; scalar_t__ i; } ;
struct kvm_vcpu {int dummy; } ;
struct gmap {TYPE_1__* mm; int parent; } ;
struct TYPE_2__ {int mmap_sem; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long,unsigned long*) ;
 int FUNC_3 (struct gmap*,unsigned long,int ) ;
 int FUNC_4 (struct gmap*,unsigned long,unsigned long*,int*,int*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct gmap*,unsigned long,unsigned long*,int*,int*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm_vcpu *VAR_3, struct gmap *VAR_4,
     unsigned long VAR_5)
{
 union vaddress VAR_6;
 union page_table_entry VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(&VAR_4->mm->mmap_sem);





 FUNC_5(VAR_3);

 VAR_11 = FUNC_4(VAR_4, VAR_5, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11)
  VAR_11 = FUNC_7(VAR_4, VAR_5, &VAR_8, &VAR_9,
         &VAR_10);

 VAR_6.addr = VAR_5;
 if (VAR_10) {
  VAR_7.val = VAR_8 + VAR_6.px * VAR_0;
  goto shadow_page;
 }
 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_4->parent, VAR_8 + VAR_6.px * 8, &VAR_7.val);
 if (!VAR_11 && VAR_7.i)
  VAR_11 = VAR_1;
 if (!VAR_11 && VAR_7.z)
  VAR_11 = VAR_2;
shadow_page:
 VAR_7.p |= VAR_9;
 if (!VAR_11)
  VAR_11 = FUNC_3(VAR_4, VAR_5, FUNC_0(VAR_7.val));
 FUNC_6(VAR_3);
 FUNC_8(&VAR_4->mm->mmap_sem);
 return VAR_11;
}
