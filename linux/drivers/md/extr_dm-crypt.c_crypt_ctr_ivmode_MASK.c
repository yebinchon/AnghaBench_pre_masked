
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct dm_target {char* error; struct crypt_config* private; } ;
struct crypt_config {int iv_size; int key_size; int key_parts; int key_extra_size; int integrity_iv_size; int * iv_gen_ops; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypt_config*) ;
 int FUNC_2 (struct crypt_config*) ;
 scalar_t__ FUNC_3 (struct crypt_config*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,unsigned int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_12, const char *VAR_13)
{
 struct crypt_config *VAR_14 = VAR_12->private;

 if (FUNC_3(VAR_14))
  VAR_14->iv_size = FUNC_4(FUNC_2(VAR_14));
 else
  VAR_14->iv_size = FUNC_5(FUNC_1(VAR_14));

 if (VAR_14->iv_size)

  VAR_14->iv_size = FUNC_6(VAR_14->iv_size,
      (unsigned int)(sizeof(u64) / sizeof(u8)));
 else if (VAR_13) {
  FUNC_0("Selected cipher does not support IVs");
  VAR_13 = ((void*)0);
 }


 if (VAR_13 == ((void*)0))
  VAR_14->iv_gen_ops = ((void*)0);
 else if (FUNC_7(VAR_13, "plain") == 0)
  VAR_14->iv_gen_ops = &VAR_9;
 else if (FUNC_7(VAR_13, "plain64") == 0)
  VAR_14->iv_gen_ops = &VAR_7;
 else if (FUNC_7(VAR_13, "plain64be") == 0)
  VAR_14->iv_gen_ops = &VAR_8;
 else if (FUNC_7(VAR_13, "essiv") == 0)
  VAR_14->iv_gen_ops = &VAR_4;
 else if (FUNC_7(VAR_13, "benbi") == 0)
  VAR_14->iv_gen_ops = &VAR_2;
 else if (FUNC_7(VAR_13, "null") == 0)
  VAR_14->iv_gen_ops = &VAR_6;
 else if (FUNC_7(VAR_13, "eboiv") == 0)
  VAR_14->iv_gen_ops = &VAR_3;
 else if (FUNC_7(VAR_13, "lmk") == 0) {
  VAR_14->iv_gen_ops = &VAR_5;






  if (VAR_14->key_size % VAR_14->key_parts) {
   VAR_14->key_parts++;
   VAR_14->key_extra_size = VAR_14->key_size / VAR_14->key_parts;
  }
 } else if (FUNC_7(VAR_13, "tcw") == 0) {
  VAR_14->iv_gen_ops = &VAR_11;
  VAR_14->key_parts += 2;
  VAR_14->key_extra_size = VAR_14->iv_size + VAR_1;
 } else if (FUNC_7(VAR_13, "random") == 0) {
  VAR_14->iv_gen_ops = &VAR_10;

  VAR_14->integrity_iv_size = VAR_14->iv_size;
 } else {
  VAR_12->error = "Invalid IV mode";
  return -VAR_0;
 }

 return 0;
}
