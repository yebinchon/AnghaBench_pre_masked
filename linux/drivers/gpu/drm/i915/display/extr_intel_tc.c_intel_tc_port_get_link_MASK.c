
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {int tc_link_refcount; } ;


 int FUNC_0 (struct intel_digital_port*,int) ;
 int FUNC_1 (struct intel_digital_port*) ;

void FUNC_2(struct intel_digital_port *VAR_0,
       int VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->tc_link_refcount++;
 FUNC_1(VAR_0);
}
