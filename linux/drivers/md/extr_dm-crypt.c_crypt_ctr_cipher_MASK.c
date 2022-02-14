
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dm_target {char* error; struct crypt_config* private; } ;
struct crypt_config {int key_size; int key; scalar_t__ key_string; TYPE_1__* iv_gen_ops; int cipher_string; } ;
struct TYPE_2__ {int (* ctr ) (struct crypt_config*,struct dm_target*,char*) ;int (* init ) (struct crypt_config*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dm_target*,char*,char*,char**,char**) ;
 int FUNC_1 (struct dm_target*,char*,char*,char**,char**) ;
 int FUNC_2 (struct dm_target*,char*) ;
 int FUNC_3 (struct crypt_config*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (struct crypt_config*,struct dm_target*,char*) ;
 int FUNC_8 (struct crypt_config*) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_2, char *VAR_3, char *VAR_4)
{
 struct crypt_config *VAR_5 = VAR_2->private;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_5->cipher_string = FUNC_4(VAR_3, VAR_1);
 if (!VAR_5->cipher_string) {
  VAR_2->error = "Cannot allocate cipher strings";
  return -VAR_0;
 }

 if (FUNC_6(VAR_3, "capi:"))
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);
 else
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_2, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_8 = FUNC_3(VAR_5, VAR_4);
 if (VAR_8 < 0) {
  VAR_2->error = "Error decoding and setting key";
  return VAR_8;
 }


 if (VAR_5->iv_gen_ops && VAR_5->iv_gen_ops->ctr) {
  VAR_8 = VAR_5->iv_gen_ops->ctr(VAR_5, VAR_2, VAR_7);
  if (VAR_8 < 0) {
   VAR_2->error = "Error creating IV";
   return VAR_8;
  }
 }


 if (VAR_5->iv_gen_ops && VAR_5->iv_gen_ops->init) {
  VAR_8 = VAR_5->iv_gen_ops->init(VAR_5);
  if (VAR_8 < 0) {
   VAR_2->error = "Error initialising IV";
   return VAR_8;
  }
 }


 if (VAR_5->key_string)
  FUNC_5(VAR_5->key, 0, VAR_5->key_size * sizeof(u8));

 return VAR_8;
}
