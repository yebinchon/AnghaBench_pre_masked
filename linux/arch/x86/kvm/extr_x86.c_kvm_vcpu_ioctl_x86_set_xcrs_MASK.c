
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_xcrs {int nr_xcrs; TYPE_1__* xcrs; scalar_t__ flags; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ xcr; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,scalar_t__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4,
           struct kvm_xcrs *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_5->nr_xcrs > VAR_1 || VAR_5->flags)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->nr_xcrs; VAR_6++)

  if (VAR_5->xcrs[VAR_6].xcr == VAR_3) {
   VAR_7 = FUNC_0(VAR_4, VAR_3,
    VAR_5->xcrs[VAR_6].value);
   break;
  }
 if (VAR_7)
  VAR_7 = -VAR_0;
 return VAR_7;
}
