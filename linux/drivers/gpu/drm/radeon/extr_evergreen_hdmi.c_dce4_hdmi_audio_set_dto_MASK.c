
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;

void FUNC_4(struct radeon_device *VAR_6,
 struct radeon_crtc *VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9 = VAR_8 / 24000;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_9 >= 8) {
  VAR_10 = 192 * 1000;
  VAR_11 = 3;
 } else if (VAR_9 >= 4) {
  VAR_10 = 96 * 1000;
  VAR_11 = 2;
 } else if (VAR_9 >= 2) {
  VAR_10 = 48 * 1000;
  VAR_11 = 1;
 } else {
  VAR_10 = 24 * 1000;
  VAR_11 = 0;
 }

 VAR_12 = FUNC_2(VAR_0) & ~VAR_5;
 VAR_12 |= FUNC_1(VAR_11);
 VAR_12 &= ~VAR_3;
 FUNC_3(VAR_0, VAR_12);


 VAR_12 = 0;

 if (VAR_7)
  VAR_12 |= FUNC_0(VAR_7->crtc_id);

 FUNC_3(VAR_4, VAR_12);





 FUNC_3(VAR_2, VAR_10);
 FUNC_3(VAR_1, VAR_8);
}
