
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8450 {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i2c_client*,unsigned int,size_t,int *) ;

__attribute__((used)) static int FUNC_2(struct mma8450 *VAR_1, unsigned VAR_2,
         u8 *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->client;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_4, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev,
   "failed to read block data at 0x%02x, error %d\n",
   VAR_0, VAR_6);
  return VAR_6;
 }

 return 0;
}
