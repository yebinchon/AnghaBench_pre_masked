
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct fts_data {int access_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned short,...) ;
 struct fts_data* FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_client*,unsigned short) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned char) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1, unsigned short VAR_2)
{
 int VAR_3;
 unsigned char VAR_4 = VAR_2 >> 8;
 struct fts_data *VAR_5 = FUNC_1(&VAR_1->dev);

 FUNC_4(&VAR_5->access_lock);

 FUNC_0(&VAR_1->dev, "page select - page: 0x%.02x\n", VAR_4);
 VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_4);
 if (VAR_3 < 0)
  goto error;

 VAR_2 &= 0xFF;
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(&VAR_1->dev, "read - reg: 0x%.02x: val: 0x%.02x\n", VAR_2, VAR_3);

error:
 FUNC_5(&VAR_5->access_lock);
 return VAR_3;
}
