
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct etnaviv_gpu* devdata; } ;
struct etnaviv_gpu {unsigned long freq_scale; int lock; int dev; } ;


 int FUNC_0 (struct etnaviv_gpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct thermal_cooling_device *VAR_0,
      unsigned long VAR_1)
{
 struct etnaviv_gpu *VAR_2 = VAR_0->devdata;

 FUNC_1(&VAR_2->lock);
 VAR_2->freq_scale = VAR_1;
 if (!FUNC_3(VAR_2->dev))
  FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);

 return 0;
}
