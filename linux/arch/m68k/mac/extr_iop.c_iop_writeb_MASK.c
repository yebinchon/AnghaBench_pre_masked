
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_iop {int ram_addr_lo; int ram_addr_hi; int ram_data; } ;
typedef int __u8 ;
typedef int __u16 ;



__attribute__((used)) static __inline__ void FUNC_0(volatile struct mac_iop *VAR_0, __u16 VAR_1, __u8 VAR_2)
{
 VAR_0->ram_addr_lo = VAR_1;
 VAR_0->ram_addr_hi = VAR_1 >> 8;
 VAR_0->ram_data = VAR_2;
}
