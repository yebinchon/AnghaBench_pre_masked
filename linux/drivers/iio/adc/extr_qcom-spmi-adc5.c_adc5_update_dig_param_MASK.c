
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adc5_chip {int dummy; } ;
struct adc5_channel_prop {int cal_val; int cal_method; int decimation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct adc5_chip *VAR_6,
   struct adc5_channel_prop *VAR_7, u8 *VAR_8)
{

 *VAR_8 &= ~VAR_2;
 *VAR_8 |= (VAR_7->cal_val << VAR_3);


 *VAR_8 &= ~VAR_0;
 *VAR_8 |= (VAR_7->cal_method << VAR_1);


 *VAR_8 &= ~VAR_4;
 *VAR_8 |= (VAR_7->decimation << VAR_5);
}
