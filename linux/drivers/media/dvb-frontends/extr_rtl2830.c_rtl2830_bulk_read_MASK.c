
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2830_dev {int regmap; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 struct rtl2830_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int,void*,size_t) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1, unsigned int VAR_2,
        void *VAR_3, size_t VAR_4)
{
 struct rtl2830_dev *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_1(VAR_1->adapter, VAR_0);
 VAR_6 = FUNC_3(VAR_5->regmap, VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_1->adapter, VAR_0);
 return VAR_6;
}
