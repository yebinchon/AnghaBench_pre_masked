
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {scalar_t__ family; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct drm_device *VAR_8)
{
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 uint32_t VAR_10, VAR_11;

 if (VAR_9->family >= VAR_3) {
  VAR_10 = FUNC_1(VAR_4);
  VAR_11 = FUNC_1(VAR_5);
 } else {
  VAR_10 = FUNC_1(VAR_6);
  VAR_11 = FUNC_1(VAR_7);
 }


 VAR_10 &= ~VAR_1;


 VAR_11 |= VAR_2;


 if (FUNC_0(VAR_9))
  VAR_10 &= ~VAR_0;

 if (VAR_9->family >= VAR_3) {
  FUNC_2(VAR_4, VAR_10);
  FUNC_2(VAR_5, VAR_11);
 } else {
  FUNC_2(VAR_6, VAR_10);
  FUNC_2(VAR_7, VAR_11);
 }

}
