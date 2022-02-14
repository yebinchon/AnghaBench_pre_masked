
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int max_xmit_msg_size; int cmd8_works; } ;
struct i2c_client {int dev; } ;
typedef int msg ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int,unsigned char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct i2c_client*,unsigned char*) ;
 int FUNC_4 (struct i2c_client*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_4,
        struct ssif_info *VAR_5,
        unsigned char *VAR_6)
{
 unsigned char VAR_7[65];
 int VAR_8;
 bool VAR_9;

 if (VAR_5->max_xmit_msg_size <= 32)
  return;

 VAR_9 = VAR_5->max_xmit_msg_size > 63;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 VAR_7[0] = VAR_1 << 2;
 VAR_7[1] = VAR_0;
 VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_9);
 if (VAR_8)
  goto out_no_multi_part;

 VAR_8 = FUNC_1(VAR_4,
      VAR_2,
      1, VAR_7 + 64);

 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_4, VAR_6);

 if (VAR_8 > 0) {

  VAR_5->cmd8_works = 1;
  return;
 }

 VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_9);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "Second multipart test failed.\n");
  goto out_no_multi_part;
 }

 VAR_8 = FUNC_1(VAR_4,
      VAR_3,
      0, VAR_7 + 64);
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_4, VAR_6);
 if (VAR_8 > 0)

  return;


 if (VAR_5->max_xmit_msg_size > 63)
  VAR_5->max_xmit_msg_size = 63;
 return;

out_no_multi_part:
 VAR_5->max_xmit_msg_size = 32;
 return;
}
