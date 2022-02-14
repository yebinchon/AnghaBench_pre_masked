
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
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

void FUNC_5(struct radeon_device *VAR_10,
      struct radeon_crtc *VAR_11, unsigned int VAR_12)
{
 u32 VAR_13;

 VAR_13 = FUNC_2(VAR_0) & ~VAR_6;
 VAR_13 |= VAR_3;
 FUNC_3(VAR_0, VAR_13);


 VAR_13 = 0;
 VAR_13 |= VAR_4;

 if (VAR_11)
  VAR_13 |= FUNC_1(VAR_11->crtc_id);

 FUNC_3(VAR_5, VAR_13);





 if (FUNC_0(VAR_10)) {
  unsigned int VAR_14 = (FUNC_2(VAR_7) &
   VAR_8) >>
   VAR_9;
  VAR_14 = FUNC_4(VAR_14);

  if (VAR_14)
   VAR_12 = 100 * VAR_12 / VAR_14;
 }

 FUNC_3(VAR_2, 24000);
 FUNC_3(VAR_1, VAR_12);
}
