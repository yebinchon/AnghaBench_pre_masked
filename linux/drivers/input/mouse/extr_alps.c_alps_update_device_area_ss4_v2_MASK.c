
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_data {int x_max; int y_max; int x_res; int y_res; int dev_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;

__attribute__((used)) static int FUNC_1(unsigned char VAR_8[][4],
       struct alps_data *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (FUNC_0(VAR_9->dev_id)) {
  VAR_10 =
   VAR_2 + (VAR_8[0][2] & 0x0F);
  VAR_11 =
   VAR_3 + ((VAR_8[0][2] >> 4) & 0x0F);

  VAR_9->x_max =
   (VAR_10 - 1) * VAR_0;
  VAR_9->y_max =
   (VAR_11 - 1) * VAR_0;

  VAR_12 = (VAR_8[0][1] & 0x0F) + VAR_1;
  VAR_13 = ((VAR_8[0][1] >> 4) & 0x0F) + VAR_1;

 } else {
  VAR_10 =
   VAR_6 + (VAR_8[1][0] & 0x0F);
  VAR_11 =
   VAR_7 + ((VAR_8[1][0] >> 4) & 0x0F);

  VAR_9->x_max =
   (VAR_10 - 1) * VAR_4;
  VAR_9->y_max =
   (VAR_11 - 1) * VAR_4;

  VAR_12 = ((VAR_8[1][2] >> 2) & 0x07) + VAR_5;
  VAR_13 = ((VAR_8[1][2] >> 5) & 0x07) + VAR_5;
 }

 VAR_14 = VAR_12 * (VAR_10 - 1);
 VAR_15 = VAR_13 * (VAR_11 - 1);

 VAR_9->x_res = VAR_9->x_max * 10 / VAR_14;
 VAR_9->y_res = VAR_9->y_max * 10 / VAR_15;

 return 0;
}
