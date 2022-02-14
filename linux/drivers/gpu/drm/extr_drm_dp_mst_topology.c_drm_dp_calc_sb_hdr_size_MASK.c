
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_hdr {int lct; } ;



__attribute__((used)) static inline u8 FUNC_0(struct drm_dp_sideband_msg_hdr *VAR_0)
{
 u8 VAR_1 = 3;
 VAR_1 += (VAR_0->lct / 2);
 return VAR_1;
}
