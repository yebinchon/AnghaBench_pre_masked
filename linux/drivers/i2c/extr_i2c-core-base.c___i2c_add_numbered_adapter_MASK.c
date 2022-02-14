
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int *,struct i2c_adapter*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_3);
 VAR_6 = FUNC_2(&VAR_4, VAR_5, VAR_5->nr, VAR_5->nr + 1, VAR_2);
 FUNC_4(&VAR_3);
 if (FUNC_0(VAR_6 < 0, "couldn't get idr"))
  return VAR_6 == -VAR_1 ? -VAR_0 : VAR_6;

 return FUNC_1(VAR_5);
}
