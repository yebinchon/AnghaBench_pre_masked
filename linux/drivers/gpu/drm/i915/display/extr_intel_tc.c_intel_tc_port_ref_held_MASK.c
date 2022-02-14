
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {scalar_t__ tc_link_refcount; int tc_lock; } ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(struct intel_digital_port *VAR_0)
{
 return FUNC_0(&VAR_0->tc_lock) ||
        VAR_0->tc_link_refcount;
}
