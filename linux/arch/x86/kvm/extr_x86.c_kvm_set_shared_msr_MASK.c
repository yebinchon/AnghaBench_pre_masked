
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int on_user_return; } ;
struct kvm_shared_msrs {int registered; TYPE_2__ urn; TYPE_1__* values; } ;
struct TYPE_6__ {int * msrs; } ;
struct TYPE_4__ {int curr; } ;


 int VAR_0 ;
 struct kvm_shared_msrs* FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(unsigned VAR_3, u64 VAR_4, u64 VAR_5)
{
 unsigned int VAR_6 = FUNC_1();
 struct kvm_shared_msrs *VAR_7 = FUNC_0(VAR_1, VAR_6);
 int VAR_8;

 if (((VAR_4 ^ VAR_7->values[VAR_3].curr) & VAR_5) == 0)
  return 0;
 VAR_7->values[VAR_3].curr = VAR_4;
 VAR_8 = FUNC_3(VAR_2.msrs[VAR_3], VAR_4);
 if (VAR_8)
  return 1;

 if (!VAR_7->registered) {
  VAR_7->urn.on_user_return = VAR_0;
  FUNC_2(&VAR_7->urn);
  VAR_7->registered = 1;
 }
 return 0;
}
