
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
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int,unsigned char*,int*,unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8, struct i2c_board_info *VAR_9)
{
 unsigned char *VAR_10;
 unsigned char VAR_11[3];
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(VAR_6, VAR_3);
 if (!VAR_10)
  return -VAR_2;


 VAR_11[0] = VAR_7 << 2;
 VAR_11[1] = VAR_5;
 VAR_12 = FUNC_0(VAR_8, 2, VAR_11, &VAR_13, VAR_10);
 if (VAR_12)
  VAR_12 = -VAR_1;
 else
  FUNC_3(VAR_9->type, VAR_0, VAR_4);
 FUNC_1(VAR_10);
 return VAR_12;
}
