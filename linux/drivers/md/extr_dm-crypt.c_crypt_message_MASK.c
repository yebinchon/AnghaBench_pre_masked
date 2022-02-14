
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dm_target {struct crypt_config* private; } ;
struct crypt_config {int key_size; char* key; scalar_t__ key_string; TYPE_1__* iv_gen_ops; int flags; } ;
struct TYPE_2__ {int (* init ) (struct crypt_config*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypt_config*,char*) ;
 int FUNC_2 (struct crypt_config*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct crypt_config*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct dm_target *VAR_2, unsigned VAR_3, char **VAR_4,
    char *VAR_5, unsigned VAR_6)
{
 struct crypt_config *VAR_7 = VAR_2->private;
 int VAR_8, VAR_9 = -VAR_1;

 if (VAR_3 < 2)
  goto error;

 if (!FUNC_5(VAR_4[0], "key")) {
  if (!FUNC_8(VAR_0, &VAR_7->flags)) {
   FUNC_0("not suspended during key manipulation.");
   return -VAR_1;
  }
  if (VAR_3 == 3 && !FUNC_5(VAR_4[1], "set")) {

   VAR_8 = FUNC_3(&VAR_4[2]);
   if (VAR_8 < 0 || VAR_7->key_size != VAR_8) {
    FUNC_4(VAR_4[2], '0', FUNC_6(VAR_4[2]));
    return -VAR_1;
   }

   VAR_9 = FUNC_1(VAR_7, VAR_4[2]);
   if (VAR_9)
    return VAR_9;
   if (VAR_7->iv_gen_ops && VAR_7->iv_gen_ops->init)
    VAR_9 = VAR_7->iv_gen_ops->init(VAR_7);

   if (VAR_7->key_string)
    FUNC_4(VAR_7->key, 0, VAR_7->key_size * sizeof(u8));
   return VAR_9;
  }
  if (VAR_3 == 2 && !FUNC_5(VAR_4[1], "wipe"))
   return FUNC_2(VAR_7);
 }

error:
 FUNC_0("unrecognised message received.");
 return -VAR_1;
}
