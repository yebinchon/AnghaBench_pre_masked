
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_hvm_evtchn_upcall_vector {unsigned int vcpu; int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xen_hvm_evtchn_upcall_vector*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(unsigned int VAR_2)
{
 struct xen_hvm_evtchn_upcall_vector VAR_3;
 int VAR_4;

 VAR_3.vcpu = VAR_2;
 VAR_3.vector = VAR_1;
 VAR_4 = FUNC_0(VAR_0, &VAR_3);

 return (VAR_4 != 0 ? FUNC_1(VAR_4) : 0);
}
