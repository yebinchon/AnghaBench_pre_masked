
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int) ;

void FUNC_2(struct radeon_device *VAR_3,
        struct radeon_crtc *VAR_4, unsigned int VAR_5)
{

 u32 VAR_6 = 0;

 if (VAR_4)
  VAR_6 |= FUNC_0(VAR_4->crtc_id);

 FUNC_1(VAR_2, VAR_6);





 FUNC_1(VAR_1, 24000);
 FUNC_1(VAR_0, VAR_5);
}
