
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {unsigned int tss_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvm*) ;
 TYPE_1__* FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_2)
  return 0;

 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_4,
        VAR_0 * 3);
 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_3)->tss_addr = VAR_4;
 return FUNC_0(VAR_3);
}
