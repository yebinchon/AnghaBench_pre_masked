
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdp_hh {int ipv_cap; } ;



__attribute__((used)) static inline void FUNC_0(struct sdp_hh *VAR_0, u8 VAR_1)
{
 VAR_0->ipv_cap = (VAR_1 << 4) | (VAR_0->ipv_cap & 0xF);
}
