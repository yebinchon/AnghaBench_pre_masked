
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static u8 FUNC_2(u8 VAR_0, struct i2c_msg *VAR_1)
{

 u8 VAR_2 = FUNC_0(VAR_1);
 VAR_0 = FUNC_1(VAR_0, &VAR_2, 1);


 return FUNC_1(VAR_0, VAR_1->buf, VAR_1->len);
}
