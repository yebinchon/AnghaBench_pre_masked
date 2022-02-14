
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
    unsigned char *VAR_4, bool VAR_5)
{
 int VAR_6 = VAR_2, VAR_7;

retry_write:
 VAR_7 = FUNC_1(VAR_3,
      VAR_1,
      32, VAR_4);
 if (VAR_7) {
  VAR_6--;
  if (VAR_6 > 0)
   goto retry_write;
  FUNC_0(&VAR_3->dev, "Could not write multi-part start, though the BMC said it could handle it.  Just limit sends to one part.\n");
  return VAR_7;
 }

 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_1(VAR_3,
      VAR_0,
      32, VAR_4 + 32);
 if (VAR_7) {
  FUNC_0(&VAR_3->dev, "Could not write multi-part middle, though the BMC said it could handle it.  Just limit sends to one part.\n");
  return VAR_7;
 }

 return 0;
}
