
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,...) ;
 void* FUNC_1 (struct firmware const*,int ) ;
 int FUNC_2 (void const*,int ) ;
 int FUNC_3 (struct i2c_client*,void const*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1,
         const struct firmware *VAR_2, u32 VAR_3)
{
 const void *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4) {
  FUNC_0(&VAR_1->dev, "unable to locate chunk (type %d)\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "invalid chunk (type %d): %d\n",
   VAR_3, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev,
   "failed to write fw chunk (type %d): %d\n",
   VAR_3, VAR_5);
  return VAR_5;
 }

 return 0;
}
