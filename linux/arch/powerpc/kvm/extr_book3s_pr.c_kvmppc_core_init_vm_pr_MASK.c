
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hpt_mutex; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_3)
{
 FUNC_2(&VAR_3->arch.hpt_mutex);






 if (FUNC_0(VAR_0)) {
  FUNC_4(&VAR_2);
  if (++VAR_1 == 1)
   FUNC_3();
  FUNC_5(&VAR_2);
 }
 return 0;
}
