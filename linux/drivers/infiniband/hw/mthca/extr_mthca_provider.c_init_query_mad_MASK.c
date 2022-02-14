
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int base_version; int class_version; int method; int mgmt_class; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ib_smp *VAR_2)
{
 VAR_2->base_version = 1;
 VAR_2->mgmt_class = VAR_0;
 VAR_2->class_version = 1;
 VAR_2->method = VAR_1;
}
