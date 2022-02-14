
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64xxx_i2c_data {scalar_t__ reg_base; } ;
struct i2c_msg {int len; int buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mv64xxx_i2c_data *VAR_2,
     struct i2c_msg *VAR_3)
{
 u32 VAR_4[2];

 VAR_4[0] = FUNC_1(VAR_2->reg_base + VAR_1);
 VAR_4[1] = FUNC_1(VAR_2->reg_base + VAR_0);

 FUNC_0(VAR_3->buf, VAR_4, VAR_3->len);
}
