
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic {scalar_t__ base_address; } ;
typedef scalar_t__ gpa_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_lapic *VAR_1, gpa_t VAR_2)
{
 return VAR_2 >= VAR_1->base_address &&
  VAR_2 < VAR_1->base_address + VAR_0;
}
