
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* get_vblank_timestamp ) (struct drm_device*,unsigned int,int*,int *,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct drm_device*,unsigned int,int*,int *,int) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_1, unsigned int VAR_2,
     ktime_t *VAR_3, bool VAR_4)
{
 bool VAR_5 = 0;


 int VAR_6 = (int) VAR_0 * 1000;


 if (VAR_1->driver->get_vblank_timestamp && (VAR_6 > 0))
  VAR_5 = VAR_1->driver->get_vblank_timestamp(VAR_1, VAR_2, &VAR_6,
       VAR_3, VAR_4);




 if (!VAR_5)
  *VAR_3 = FUNC_0();

 return VAR_5;
}
