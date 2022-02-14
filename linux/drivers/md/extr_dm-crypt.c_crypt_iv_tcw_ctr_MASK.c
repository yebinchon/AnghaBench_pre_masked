
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iv_tcw_private {void* whitening; void* iv_seed; int crc32_tfm; } ;
struct dm_target {char* error; } ;
struct TYPE_2__ {struct iv_tcw_private tcw; } ;
struct crypt_config {int sector_size; scalar_t__ key_size; scalar_t__ iv_size; TYPE_1__ iv_gen_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct crypt_config*) ;
 int FUNC_3 (char*,int ,int ) ;
 void* FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct crypt_config *VAR_5, struct dm_target *VAR_6,
       const char *VAR_7)
{
 struct iv_tcw_private *VAR_8 = &VAR_5->iv_gen_private.tcw;

 if (VAR_5->sector_size != (1 << VAR_3)) {
  VAR_6->error = "Unsupported sector size for TCW";
  return -VAR_0;
 }

 if (VAR_5->key_size <= (VAR_5->iv_size + VAR_4)) {
  VAR_6->error = "Wrong key size for TCW";
  return -VAR_0;
 }

 VAR_8->crc32_tfm = FUNC_3("crc32", 0, 0);
 if (FUNC_0(VAR_8->crc32_tfm)) {
  VAR_6->error = "Error initializing CRC32 in TCW";
  return FUNC_1(VAR_8->crc32_tfm);
 }

 VAR_8->iv_seed = FUNC_4(VAR_5->iv_size, VAR_2);
 VAR_8->whitening = FUNC_4(VAR_4, VAR_2);
 if (!VAR_8->iv_seed || !VAR_8->whitening) {
  FUNC_2(VAR_5);
  VAR_6->error = "Error allocating seed storage in TCW";
  return -VAR_1;
 }

 return 0;
}
