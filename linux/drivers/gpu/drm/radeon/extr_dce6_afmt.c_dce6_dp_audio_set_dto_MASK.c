
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

void FUNC_5(struct radeon_device *VAR_9,
      struct radeon_crtc *VAR_10, unsigned int VAR_11)
{

 u32 VAR_12 = 0;
 VAR_12 |= VAR_2;

 if (VAR_10)
  VAR_12 |= FUNC_1(VAR_10->crtc_id);

 FUNC_3(VAR_3, VAR_12);





 if (FUNC_0(VAR_9)) {
  unsigned int VAR_13 = (FUNC_2(VAR_6) &
   VAR_7) >>
   VAR_8;
  VAR_13 = FUNC_4(VAR_13);

  if (VAR_13)
   VAR_11 = VAR_11 * 100 / VAR_13;

  FUNC_3(VAR_5, 24000);
  FUNC_3(VAR_4, VAR_11);
 } else {
  FUNC_3(VAR_1, 24000);
  FUNC_3(VAR_0, VAR_11);
 }
}
