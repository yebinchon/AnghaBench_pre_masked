
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_2__ {int hps_coeff; int weight_sum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct saa7146_dev *VAR_8, enum v4l2_field VAR_9,
 int VAR_10, int VAR_11, u32* VAR_12, u32* VAR_13)
{
 int VAR_14 = 0;


 u32 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 u32 VAR_20 = 0, VAR_21 = 0;


 u32 VAR_22 = 0, VAR_23 = 0;


 if ( VAR_10 < VAR_11 ) {
  return -VAR_0;
 }





 if (FUNC_0(VAR_9)) {
  if( 2*VAR_11 >= VAR_10) {
   VAR_14 = 1;
  }
 } else if (VAR_9 == VAR_5
  || VAR_9 == VAR_3
  || VAR_9 == VAR_4) {
  if( 4*VAR_11 >= VAR_10 ) {
   VAR_14 = 1;
  }
  VAR_11 *= 2;
 }
 if( 0 != VAR_14 ) {

  VAR_15 = 0;
  VAR_17 = 0;
  VAR_21 = 0x00ff;


  if ( VAR_10 > VAR_11 )
   VAR_16 = ((1024 * VAR_10) / (VAR_11 + 1)) - 1024;
  else
   VAR_16 = 0;

  VAR_20 = 0;


  VAR_19 = VAR_16 / 16;
  VAR_18 = VAR_19 + (VAR_16 / 64);

 } else {
  VAR_15 = 1;


  VAR_16 = (((10 * 1024 * (VAR_10 - VAR_11 - 1)) / VAR_10) + 9) / 10;


  VAR_18 = VAR_19 = ((VAR_16 + 15) / 16);






  if ( VAR_16 < 512) {
   VAR_17 = 0;
  } else {
   VAR_17 = ( VAR_16 / (1024 - VAR_16) );
  }


  VAR_21 = VAR_6[ (VAR_17 < 63 ? VAR_17 : 63 ) ].hps_coeff;


  VAR_22 = VAR_6[ (VAR_17 < 63 ? VAR_17 : 63 ) ].weight_sum;

  for (VAR_23 = 0; VAR_7[VAR_23] != 0; VAR_23++) {
   if (VAR_7[VAR_23] >= VAR_22)
    break;
  }

  VAR_20 = VAR_23;
 }


 *VAR_12 |= (VAR_15 << 31) | (VAR_16 << 21) | (VAR_17 << 15) | (VAR_18 << 8 ) | (VAR_19 << 1);

 *VAR_13 &= ~(VAR_2|VAR_1);
 *VAR_13 |= (VAR_20 << 16) | (VAR_21 << 0);

 return 0;
}
