
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ak8974 {char const* name; unsigned int variant; TYPE_1__* i2c; int map; } ;
typedef int sn ;
typedef int fab_data2 ;
typedef int fab_data1 ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ak8974*,int ,int *) ;
 int FUNC_2 (struct ak8974*,int ,int *,int) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct ak8974 *VAR_6)
{
 unsigned int VAR_7;
 const char *VAR_8;
 int VAR_9;
 unsigned int VAR_10;
 u16 VAR_11;

 VAR_9 = FUNC_6(VAR_6->map, VAR_0, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = "ami305";

 switch (VAR_7) {
 case 128:
  VAR_8 = "ami306";

 case 129:
  VAR_9 = FUNC_6(VAR_6->map, VAR_2, &VAR_10);
  if (VAR_9)
   return VAR_9;
  VAR_10 &= 0x7f;
  VAR_9 = FUNC_1(VAR_6, VAR_1, &VAR_11);
  if (VAR_9)
   return VAR_9;
  FUNC_0(&VAR_11, sizeof(VAR_11));
  FUNC_4(&VAR_6->i2c->dev,
    "detected %s, FW ver %02x, S/N: %04x\n",
    VAR_8, VAR_10, VAR_11);
  break;
 case 130:
  VAR_8 = "ak8974";
  FUNC_4(&VAR_6->i2c->dev, "detected AK8974\n");
  break;
 default:
  FUNC_3(&VAR_6->i2c->dev, "unsupported device (%02x) ",
   VAR_7);
  return -VAR_5;
 }

 VAR_6->name = VAR_8;
 VAR_6->variant = VAR_7;

 if (VAR_7 == 128) {
  __le16 VAR_12[9], VAR_13[3];
  int VAR_14;

  FUNC_2(VAR_6, VAR_3,
           VAR_12, sizeof(VAR_12));
  FUNC_2(VAR_6, VAR_4,
           VAR_13, sizeof(VAR_13));

  for (VAR_14 = 0; VAR_14 < 3; ++VAR_14) {
   static const char VAR_15[3] = "XYZ";
   static const char VAR_16[6] = "ZYZXYX";
   unsigned VAR_17 = FUNC_5(VAR_13[VAR_14]) & 0x7F;
   unsigned VAR_18 = FUNC_5(VAR_12[VAR_14]);
   unsigned VAR_19 = FUNC_5(VAR_12[VAR_14 + 3]);
   unsigned VAR_20 = FUNC_5(VAR_12[VAR_14 + 6]);
   unsigned VAR_21 = VAR_20 >> 8;

   VAR_20 &= 0xFF;

   FUNC_4(&VAR_6->i2c->dev,
     "factory calibration for axis %c: offz=%u sens=%u fine=%u pga%c=%u pga%c=%u\n",
     VAR_15[VAR_14], VAR_17, VAR_19, VAR_18, VAR_16[VAR_14 * 2],
     VAR_20, VAR_16[VAR_14 * 2 + 1], VAR_21);
  }
 }

 return 0;
}
