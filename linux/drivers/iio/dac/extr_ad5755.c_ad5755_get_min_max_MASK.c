
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {size_t channel; } ;
struct ad5755_state {int* ctrl; } ;
typedef enum ad5755_mode { ____Placeholder_ad5755_mode } ad5755_mode ;


 int** VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ad5755_state *VAR_1,
 struct iio_chan_spec const *VAR_2, int *VAR_3, int *VAR_4)
{
 enum ad5755_mode VAR_5 = VAR_1->ctrl[VAR_2->channel] & 7;
 *VAR_3 = VAR_0[VAR_5][0];
 *VAR_4 = VAR_0[VAR_5][1];
}
