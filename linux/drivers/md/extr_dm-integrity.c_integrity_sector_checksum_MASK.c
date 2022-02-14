
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dm_integrity_c {int sectors_per_block; unsigned int tag_size; int internal_hash; } ;
typedef int sector_t ;
typedef char __u8 ;
typedef int __u64 ;
struct TYPE_6__ {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char const*,int) ;
 int FUNC_6 (struct dm_integrity_c*,char*,int) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (char*,int ,unsigned int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct dm_integrity_c *VAR_2, sector_t VAR_3,
          const char *VAR_4, char *VAR_5)
{
 __u64 VAR_6 = FUNC_1(VAR_3);
 FUNC_0(VAR_1, VAR_2->internal_hash);
 int VAR_7;
 unsigned VAR_8;

 VAR_1->tfm = VAR_2->internal_hash;

 VAR_7 = FUNC_4(VAR_1);
 if (FUNC_9(VAR_7 < 0)) {
  FUNC_6(VAR_2, "crypto_shash_init", VAR_7);
  goto failed;
 }

 VAR_7 = FUNC_5(VAR_1, (const __u8 *)&VAR_6, sizeof VAR_6);
 if (FUNC_9(VAR_7 < 0)) {
  FUNC_6(VAR_2, "crypto_shash_update", VAR_7);
  goto failed;
 }

 VAR_7 = FUNC_5(VAR_1, VAR_4, VAR_2->sectors_per_block << VAR_0);
 if (FUNC_9(VAR_7 < 0)) {
  FUNC_6(VAR_2, "crypto_shash_update", VAR_7);
  goto failed;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_5);
 if (FUNC_9(VAR_7 < 0)) {
  FUNC_6(VAR_2, "crypto_shash_final", VAR_7);
  goto failed;
 }

 VAR_8 = FUNC_2(VAR_2->internal_hash);
 if (FUNC_9(VAR_8 < VAR_2->tag_size))
  FUNC_8(VAR_5 + VAR_8, 0, VAR_2->tag_size - VAR_8);

 return;

failed:

 FUNC_7(VAR_5, VAR_2->tag_size);
}
