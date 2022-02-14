
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; int locked_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline int FUNC_3(struct i2c_adapter *VAR_3)
{
 if (FUNC_2(VAR_1, &VAR_3->locked_flags)) {
  if (!FUNC_1(VAR_2, &VAR_3->locked_flags))
   FUNC_0(&VAR_3->dev, "Transfer while suspended\n");
  return -VAR_0;
 }

 return 0;
}
