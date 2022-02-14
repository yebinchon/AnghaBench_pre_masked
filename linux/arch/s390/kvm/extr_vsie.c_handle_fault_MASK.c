
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsie_page {int fault_addr; int gmap; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ gmap_int_code; int gmap_write_flag; int gmap_addr; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, struct vsie_page *VAR_3)
{
 int VAR_4;

 if (VAR_1->thread.gmap_int_code == VAR_0)

  return FUNC_0(VAR_2, VAR_0,
        VAR_1->thread.gmap_addr, 1);

 VAR_4 = FUNC_1(VAR_2, VAR_3->gmap,
       VAR_1->thread.gmap_addr);
 if (VAR_4 > 0) {
  VAR_4 = FUNC_0(VAR_2, VAR_4,
      VAR_1->thread.gmap_addr,
      VAR_1->thread.gmap_write_flag);
  if (VAR_4 >= 0)
   VAR_3->fault_addr = VAR_1->thread.gmap_addr;
 }
 return VAR_4;
}
