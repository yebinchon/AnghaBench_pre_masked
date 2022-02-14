
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sector; } ;
struct journal_entry {TYPE_1__ u; } ;
struct dm_integrity_c {unsigned int journal_section_entries; int journal_mac; } ;
typedef int digest ;
typedef int __u8 ;
struct TYPE_8__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct journal_entry* FUNC_2 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (struct dm_integrity_c*,char*,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int *,unsigned int) ;
 int FUNC_10 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct dm_integrity_c *VAR_4, unsigned VAR_5, __u8 VAR_6[VAR_2])
{
 FUNC_0(VAR_3, VAR_4->journal_mac);
 int VAR_7;
 unsigned VAR_8, VAR_9;

 VAR_3->tfm = VAR_4->journal_mac;

 VAR_7 = FUNC_5(VAR_3);
 if (FUNC_11(VAR_7)) {
  FUNC_7(VAR_4, "crypto_shash_init", VAR_7);
  goto err;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->journal_section_entries; VAR_8++) {
  struct journal_entry *VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_8);
  VAR_7 = FUNC_6(VAR_3, (__u8 *)&VAR_10->u.sector, sizeof VAR_10->u.sector);
  if (FUNC_11(VAR_7)) {
   FUNC_7(VAR_4, "crypto_shash_update", VAR_7);
   goto err;
  }
 }

 VAR_9 = FUNC_3(VAR_4->journal_mac);

 if (FUNC_8(VAR_9 <= VAR_2)) {
  VAR_7 = FUNC_4(VAR_3, VAR_6);
  if (FUNC_11(VAR_7)) {
   FUNC_7(VAR_4, "crypto_shash_final", VAR_7);
   goto err;
  }
  FUNC_10(VAR_6 + VAR_9, 0, VAR_2 - VAR_9);
 } else {
  __u8 VAR_11[VAR_1];

  if (FUNC_1(VAR_9 > sizeof(VAR_11))) {
   FUNC_7(VAR_4, "digest_size", -VAR_0);
   goto err;
  }
  VAR_7 = FUNC_4(VAR_3, VAR_11);
  if (FUNC_11(VAR_7)) {
   FUNC_7(VAR_4, "crypto_shash_final", VAR_7);
   goto err;
  }
  FUNC_9(VAR_6, VAR_11, VAR_2);
 }

 return;
err:
 FUNC_10(VAR_6, 0, VAR_2);
}
