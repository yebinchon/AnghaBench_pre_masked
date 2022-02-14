
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tiadc_device {int* channel_step; } ;



__attribute__((used)) static u32 FUNC_0(struct tiadc_device *VAR_0, int VAR_1)
{
 return 1 << VAR_0->channel_step[VAR_1];
}
