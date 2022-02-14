
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct aspeed_cooling_device* devdata; } ;
struct aspeed_cooling_device {unsigned long cur_state; } ;



__attribute__((used)) static int
FUNC_0(struct thermal_cooling_device *VAR_0,
       unsigned long *VAR_1)
{
 struct aspeed_cooling_device *VAR_2 = VAR_0->devdata;

 *VAR_1 = VAR_2->cur_state;

 return 0;
}
