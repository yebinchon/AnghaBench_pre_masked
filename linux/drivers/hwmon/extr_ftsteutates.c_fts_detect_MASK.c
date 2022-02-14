
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct i2c_board_info {scalar_t__ flags; int type; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_8,
        struct i2c_board_info *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_0(VAR_8, VAR_5);
 if (VAR_10 < 0x2b)
  return -VAR_0;


 VAR_10 = FUNC_0(VAR_8, VAR_1);
 if (VAR_10 != 0x17)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 if (VAR_10 != 0x34)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_3);
 if (VAR_10 != 0x54)
  return -VAR_0;





 VAR_10 = FUNC_0(VAR_8, VAR_4);
 if (VAR_10 != 0x11)
  return -VAR_0;

 FUNC_1(VAR_9->type, VAR_7[0].name, VAR_6);
 VAR_9->flags = 0;
 return 0;
}
