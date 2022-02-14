
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int virt; } ;
struct kvm_resize_hpt {TYPE_1__ hpt; int order; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct kvm_resize_hpt*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_resize_hpt *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->hpt, VAR_0->order);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_1(VAR_0, "resize_hpt_allocate(): HPT @ 0x%lx\n",
    VAR_0->hpt.virt);

 return 0;
}
