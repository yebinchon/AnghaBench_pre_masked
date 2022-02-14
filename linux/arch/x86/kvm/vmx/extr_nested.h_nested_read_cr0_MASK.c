
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {unsigned long guest_cr0; unsigned long cr0_guest_host_mask; unsigned long cr0_read_shadow; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct vmcs12 *VAR_0)
{
 return (VAR_0->guest_cr0 & ~VAR_0->cr0_guest_host_mask) |
  (VAR_0->cr0_read_shadow & VAR_0->cr0_guest_host_mask);
}
