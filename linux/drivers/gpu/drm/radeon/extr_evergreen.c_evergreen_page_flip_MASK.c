
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct radeon_device *VAR_4, int VAR_5, u64 VAR_6,
    bool VAR_7)
{
 struct radeon_crtc *VAR_8 = VAR_4->mode_info.crtcs[VAR_5];


 FUNC_1(VAR_0 + VAR_8->crtc_offset,
        VAR_7 ? VAR_3 : 0);
 FUNC_1(VAR_2 + VAR_8->crtc_offset,
        FUNC_2(VAR_6));
 FUNC_1(VAR_1 + VAR_8->crtc_offset,
        (u32)VAR_6);

 FUNC_0(VAR_1 + VAR_8->crtc_offset);
}
