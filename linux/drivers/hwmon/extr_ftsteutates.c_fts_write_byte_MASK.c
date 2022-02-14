
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct fts_data {int access_lock; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (int *,char*,unsigned short,...) ;
 struct fts_data* FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_client*,unsigned short,unsigned char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1, unsigned short VAR_2,
     unsigned char VAR_3)
{
 int VAR_4;
 unsigned char VAR_5 = VAR_2 >> 8;
 struct fts_data *VAR_6 = FUNC_1(&VAR_1->dev);

 FUNC_3(&VAR_6->access_lock);

 FUNC_0(&VAR_1->dev, "page select - page: 0x%.02x\n", VAR_5);
 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_5);
 if (VAR_4 < 0)
  goto error;

 VAR_2 &= 0xFF;
 FUNC_0(&VAR_1->dev,
  "write - reg: 0x%.02x: val: 0x%.02x\n", VAR_2, VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

error:
 FUNC_4(&VAR_6->access_lock);
 return VAR_4;
}
