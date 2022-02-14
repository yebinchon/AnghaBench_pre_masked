
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_shared_msrs {int urn; scalar_t__ registered; } ;


 int FUNC_0 (int *) ;
 struct kvm_shared_msrs* FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_1 = FUNC_2();
 struct kvm_shared_msrs *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2->registered)
  FUNC_0(&VAR_2->urn);
}
