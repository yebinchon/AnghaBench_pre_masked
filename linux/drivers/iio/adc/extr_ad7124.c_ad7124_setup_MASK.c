
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7124_state {unsigned int adc_control; int num_channels; int sd; TYPE_1__* channel_config; int mclk; } ;
struct TYPE_2__ {unsigned int ain; int buf_positive; int buf_negative; int refsel; int bipolar; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int*) ;
 int VAR_2 ;
 unsigned int FUNC_8 (unsigned int*,int ,unsigned int) ;
 int FUNC_9 (struct ad7124_state*,int) ;
 unsigned int* VAR_3 ;
 int FUNC_10 (struct ad7124_state*,int,int) ;
 int FUNC_11 (int *,int ,int,unsigned int) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct ad7124_state *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_12(VAR_4->mclk);
 if (!VAR_6)
  return -VAR_2;


 VAR_7 = FUNC_8(VAR_3,
     FUNC_7(VAR_3),
     VAR_6);
 if (VAR_6 != VAR_3[VAR_7]) {
  VAR_9 = FUNC_13(VAR_4->mclk, VAR_6);
  if (VAR_9)
   return VAR_9;
 }


 VAR_4->adc_control &= ~VAR_1;
 VAR_4->adc_control |= FUNC_0(VAR_7);
 VAR_9 = FUNC_11(&VAR_4->sd, VAR_0, 2, VAR_4->adc_control);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++) {
  VAR_5 = VAR_4->channel_config[VAR_8].ain | FUNC_2(VAR_8);
  VAR_9 = FUNC_11(&VAR_4->sd, FUNC_1(VAR_8), 2, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_9(VAR_4, VAR_8);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_10 = (VAR_4->channel_config[VAR_8].buf_positive << 1) +
   VAR_4->channel_config[VAR_8].buf_negative;

  VAR_5 = FUNC_4(VAR_4->channel_config[VAR_8].bipolar) |
        FUNC_6(VAR_4->channel_config[VAR_8].refsel) |
        FUNC_5(VAR_10);
  VAR_9 = FUNC_11(&VAR_4->sd, FUNC_3(VAR_8), 2, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;





  VAR_9 = FUNC_10(VAR_4, VAR_8, 10);
 }

 return VAR_9;
}
