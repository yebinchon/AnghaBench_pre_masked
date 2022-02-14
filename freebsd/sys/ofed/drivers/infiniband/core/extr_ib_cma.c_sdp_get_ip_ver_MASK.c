
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdp_hh {int ipv_cap; } ;



__attribute__((used)) static inline u8 FUNC_0(const struct sdp_hh *VAR_0)
{
 return VAR_0->ipv_cap >> 4;
}
