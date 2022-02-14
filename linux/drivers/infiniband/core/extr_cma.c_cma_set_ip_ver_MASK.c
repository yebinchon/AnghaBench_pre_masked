
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cma_hdr {int ip_version; } ;



__attribute__((used)) static inline void FUNC_0(struct cma_hdr *VAR_0, u8 VAR_1)
{
 VAR_0->ip_version = (VAR_1 << 4) | (VAR_0->ip_version & 0xF);
}
