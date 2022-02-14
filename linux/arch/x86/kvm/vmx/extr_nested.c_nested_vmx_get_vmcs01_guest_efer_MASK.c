
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {unsigned int nr; TYPE_3__* val; } ;
struct TYPE_5__ {TYPE_1__ guest; } ;
struct vcpu_vmx {TYPE_2__ msr_autoload; } ;
struct shared_msr_entry {int data; } ;
struct TYPE_6__ {scalar_t__ index; int value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 struct shared_msr_entry* FUNC_1 (struct vcpu_vmx*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct vcpu_vmx*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline u64 FUNC_4(struct vcpu_vmx *VAR_4)
{
 struct shared_msr_entry *VAR_5;
 unsigned int VAR_6;

 if (FUNC_2(VAR_4) & VAR_2)
  return FUNC_3(VAR_0);

 if (FUNC_0())
  return VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_4->msr_autoload.guest.nr; ++VAR_6) {
  if (VAR_4->msr_autoload.guest.val[VAR_6].index == VAR_1)
   return VAR_4->msr_autoload.guest.val[VAR_6].value;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5->data;

 return VAR_3;
}
