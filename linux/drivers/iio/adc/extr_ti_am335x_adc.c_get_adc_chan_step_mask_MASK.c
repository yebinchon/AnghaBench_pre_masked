
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tiadc_device {int* channel_step; scalar_t__* channel_line; } ;
struct iio_chan_spec {scalar_t__ channel; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct tiadc_device *VAR_0,
  struct iio_chan_spec const *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->channel_step); VAR_2++) {
  if (VAR_1->channel == VAR_0->channel_line[VAR_2]) {
   u32 VAR_3;

   VAR_3 = VAR_0->channel_step[VAR_2];

   return 1 << (VAR_3 + 1);
  }
 }
 FUNC_1(1);
 return 0;
}
