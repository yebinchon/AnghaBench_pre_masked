
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_device {int vblank_time_lock; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,unsigned int) ;
 int FUNC_1 (struct drm_device*,unsigned int,scalar_t__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,unsigned int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;
 bool VAR_4;
 ktime_t VAR_5;
 int VAR_6 = VAR_0;

 FUNC_2(&VAR_1->vblank_time_lock);





 do {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5, 0);
 } while (VAR_3 != FUNC_0(VAR_1, VAR_2) && --VAR_6 > 0);






 if (!VAR_4)
  VAR_5 = 0;





 FUNC_4(VAR_1, VAR_2, 1, VAR_5, VAR_3);

 FUNC_3(&VAR_1->vblank_time_lock);
}
