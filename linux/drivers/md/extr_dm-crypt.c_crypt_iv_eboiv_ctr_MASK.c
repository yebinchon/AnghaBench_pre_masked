
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; } ;
struct crypt_config {scalar_t__ iv_size; int cipher_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypt_config*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct crypt_config *VAR_2, struct dm_target *VAR_3,
       const char *VAR_4)
{
 if (FUNC_2(VAR_0, &VAR_2->cipher_flags)) {
  VAR_3->error = "AEAD transforms not supported for EBOIV";
  return -VAR_1;
 }

 if (FUNC_1(FUNC_0(VAR_2)) != VAR_2->iv_size) {
  VAR_3->error = "Block size of EBOIV cipher does "
       "not match IV size of block cipher";
  return -VAR_1;
 }

 return 0;
}
