
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_9,
     struct i2c_board_info *VAR_10)
{
 int VAR_11;





 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (VAR_11 != 0x00)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_6);
 if (VAR_11 != 0x50)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_3);
 if (VAR_11 != 0xc3)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_7);
 if (VAR_11 < 0 || (VAR_11 & 0xf0) != 0x20)
  return -VAR_0;


 VAR_11 = FUNC_0(VAR_9, VAR_4);
 if (VAR_11 < 0 || (VAR_11 & 0x1f))
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_5);
 if (VAR_11 < 0 || (VAR_11 & 0x3f))
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_9, VAR_8);
 if (VAR_11 < 0 || (VAR_11 & 0x3f))
  return -VAR_0;

 FUNC_1(VAR_10->type, "nct7802", VAR_1);
 return 0;
}
