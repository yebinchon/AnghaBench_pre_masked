
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pause_in_guest; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_4__ {int ept_pointer_lock; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (struct kvm*) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_8)
{
 FUNC_3(&FUNC_4(VAR_8)->ept_pointer_lock);

 if (!VAR_7)
  VAR_8->arch.pause_in_guest = 1;

 if (FUNC_0(VAR_3) && VAR_4) {
  switch (VAR_5) {
  case 128:
  case 131:

   break;
  case 133:
  case 132:
  case 130:




   if (FUNC_2())
    FUNC_1(VAR_1);
   if (VAR_6 == VAR_2)
    FUNC_1(VAR_0);
   break;
  case 129:

   break;
  }
 }
 return 0;
}
