
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_i2c_dev {scalar_t__ base; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct owl_i2c_dev* FUNC_1 (struct i2c_adapter*) ;
 unsigned long VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_5)
{
 struct owl_i2c_dev *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7;


 VAR_7 = VAR_4 + VAR_3;
 while (FUNC_2(VAR_6->base + VAR_1) & VAR_2) {
  if (FUNC_3(VAR_4, VAR_7)) {
   FUNC_0(&VAR_5->dev, "Bus busy timeout\n");
   return -VAR_0;
  }
 }

 return 0;
}
