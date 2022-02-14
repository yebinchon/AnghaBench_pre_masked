
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpu3050 {int dev; int map; } ;
typedef int otp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_2 (struct mpu3050*,int,int ,int,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mpu3050 *VAR_8)
{
 int VAR_9;
 u8 VAR_10[8];


 VAR_9 = FUNC_3(VAR_8->map,
     VAR_4,
     VAR_7,
     VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_3(VAR_8->map,
     VAR_4,
     VAR_5,
     VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_4(VAR_8->map,
      VAR_0,
      0);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_8,
          (VAR_2 |
    VAR_3 |
    VAR_1),
          0,
          sizeof(VAR_10),
          VAR_10);
 if (VAR_9)
  return VAR_9;


 FUNC_0(VAR_10, sizeof(VAR_10));

 FUNC_1(VAR_8->dev,
   "die ID: %04X, wafer ID: %02X, A lot ID: %04X, "
   "W lot ID: %03X, WP ID: %01X, rev ID: %02X\n",

   (VAR_10[1] << 8 | VAR_10[0]) & 0x1fff,

   ((VAR_10[2] << 8 | VAR_10[1]) & 0x03e0) >> 5,

   ((VAR_10[4] << 16 | VAR_10[3] << 8 | VAR_10[2]) & 0x3fffc) >> 2,

   ((VAR_10[5] << 8 | VAR_10[4]) & 0x3ffc) >> 2,

   ((VAR_10[6] << 8 | VAR_10[5]) & 0x0380) >> 7,

   VAR_10[6] >> 2);

 return 0;
}
