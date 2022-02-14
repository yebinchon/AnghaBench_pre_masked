
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_lmk_private {int * seed; int hash_tfm; } ;
struct dm_target {char* error; } ;
struct TYPE_2__ {struct iv_lmk_private lmk; } ;
struct crypt_config {int sector_size; scalar_t__ key_parts; scalar_t__ tfms_count; TYPE_1__ iv_gen_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct crypt_config*) ;
 int FUNC_3 (char*,int ,int ) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypt_config *VAR_5, struct dm_target *VAR_6,
       const char *VAR_7)
{
 struct iv_lmk_private *VAR_8 = &VAR_5->iv_gen_private.lmk;

 if (VAR_5->sector_size != (1 << VAR_4)) {
  VAR_6->error = "Unsupported sector size for LMK";
  return -VAR_0;
 }

 VAR_8->hash_tfm = FUNC_3("md5", 0, 0);
 if (FUNC_0(VAR_8->hash_tfm)) {
  VAR_6->error = "Error initializing LMK hash";
  return FUNC_1(VAR_8->hash_tfm);
 }


 if (VAR_5->key_parts == VAR_5->tfms_count) {
  VAR_8->seed = ((void*)0);
  return 0;
 }

 VAR_8->seed = FUNC_4(VAR_3, VAR_2);
 if (!VAR_8->seed) {
  FUNC_2(VAR_5);
  VAR_6->error = "Error kmallocing seed storage in LMK";
  return -VAR_1;
 }

 return 0;
}
