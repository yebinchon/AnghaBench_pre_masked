
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int (* set_tss_addr ) (struct kvm*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct kvm*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 if (VAR_4 > (unsigned int)(-3 * VAR_1))
  return -VAR_0;
 VAR_5 = VAR_2->set_tss_addr(VAR_3, VAR_4);
 return VAR_5;
}
