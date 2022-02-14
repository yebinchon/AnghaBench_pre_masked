
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_chan_spec {size_t channel; scalar_t__ differential; } ;
struct adc12138 {int dummy; } ;


 int FUNC_0 (struct adc12138*,int,void*,int) ;

__attribute__((used)) static int FUNC_1(struct adc12138 *VAR_0,
     struct iio_chan_spec const *VAR_1,
     void *VAR_2, int VAR_3)

{
 static const u8 VAR_4[] = { 0, 4, 1, 5, 2, 6, 3, 7 };
 u8 VAR_5 = (VAR_4[VAR_1->channel] << 4) |
    (VAR_1->differential ? 0 : 0x80);

 return FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3);
}
