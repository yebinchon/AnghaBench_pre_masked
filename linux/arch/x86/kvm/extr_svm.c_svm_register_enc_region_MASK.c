
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_sev_info {int regions_list; } ;
struct kvm_enc_region {scalar_t__ addr; scalar_t__ size; } ;
struct kvm {int lock; } ;
struct enc_region {scalar_t__ uaddr; scalar_t__ size; int list; int npages; int pages; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct enc_region*) ;
 struct enc_region* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*,scalar_t__,scalar_t__,int *,int) ;
 TYPE_1__* FUNC_8 (struct kvm*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_5,
       struct kvm_enc_region *VAR_6)
{
 struct kvm_sev_info *VAR_7 = &FUNC_8(VAR_5)->sev_info;
 struct enc_region *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_6(VAR_5))
  return -VAR_2;

 if (VAR_6->addr > VAR_4 || VAR_6->size > VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->pages = FUNC_7(VAR_5, VAR_6->addr, VAR_6->size, &VAR_8->npages, 1);
 if (!VAR_8->pages) {
  VAR_9 = -VAR_1;
  goto e_free;
 }







 FUNC_5(VAR_8->pages, VAR_8->npages);

 VAR_8->uaddr = VAR_6->addr;
 VAR_8->size = VAR_6->size;

 FUNC_3(&VAR_5->lock);
 FUNC_2(&VAR_8->list, &VAR_7->regions_list);
 FUNC_4(&VAR_5->lock);

 return VAR_9;

e_free:
 FUNC_0(VAR_8);
 return VAR_9;
}
