
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int cmd_buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;


 int VAR_10 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_11, int VAR_12, int VAR_13)
{
 u8 VAR_14[VAR_0];


 VAR_14[VAR_4] = VAR_9;
 VAR_14[VAR_7] = VAR_10;
 FUNC_1((u16)VAR_12, &VAR_14[VAR_1]);

 switch (VAR_12) {
 case 131:
 case 130:
 case 134:

  FUNC_2((VAR_13 & 0xFF), &VAR_14[VAR_3]);
  break;

 case 133:
  FUNC_1(VAR_5, &VAR_14[VAR_2]);
  break;

 case 132:
  FUNC_1(VAR_6, &VAR_14[VAR_2]);
  break;

 case 135:
 case 129:
 case 128:
  FUNC_2(VAR_13, &VAR_14[VAR_2]);
  break;

 default:
  VAR_14[VAR_4] = 0;
  FUNC_0(&VAR_11->dev, "Invalid command: %d\n", VAR_12);
  return -VAR_8;
 }

 return FUNC_3(VAR_11, VAR_14, sizeof(VAR_14));
}
