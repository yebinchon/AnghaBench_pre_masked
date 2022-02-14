
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int (* update_pi_irte ) (struct kvm*,unsigned int,int ,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm*,unsigned int,int ,int) ;

int FUNC_1(struct kvm *VAR_1, unsigned int VAR_2,
       uint32_t VAR_3, bool VAR_4)
{
 return VAR_0->update_pi_irte(VAR_1, VAR_2, VAR_3, VAR_4);
}
