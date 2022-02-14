
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_device {scalar_t__ clock; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct shmob_drm_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->clock) {
  VAR_1 = FUNC_0(VAR_0->clock);
  if (VAR_1 < 0)
   return VAR_1;
 }

 return 0;
}
