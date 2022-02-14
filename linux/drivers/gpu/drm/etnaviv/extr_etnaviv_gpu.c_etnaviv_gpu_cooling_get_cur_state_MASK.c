
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct etnaviv_gpu* devdata; } ;
struct etnaviv_gpu {unsigned long freq_scale; } ;



__attribute__((used)) static int
FUNC_0(struct thermal_cooling_device *VAR_0,
      unsigned long *VAR_1)
{
 struct etnaviv_gpu *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->freq_scale;

 return 0;
}
