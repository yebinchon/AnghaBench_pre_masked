
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_adapter {int dev; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_adapter*,int ,int ,int ,int *,int) ;

__attribute__((used)) static u32 FUNC_5(struct i2c_adapter *VAR_2)
{
 __le32 *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);


 if (!VAR_3 || FUNC_4(VAR_2, VAR_0, 0, 0, VAR_3,
          sizeof(*VAR_3)) != sizeof(*VAR_3)) {
  FUNC_0(&VAR_2->dev, "failure reading functionality\n");
  VAR_4 = 0;
  goto out;
 }

 VAR_4 = FUNC_3(VAR_3);
out:
 FUNC_1(VAR_3);
 return VAR_4;
}
