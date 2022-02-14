
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {int num_discard_bios; struct crypt_config* private; } ;
struct crypt_config {unsigned int key_size; int sector_size; int cipher_flags; int cipher_auth; int on_disk_tag_size; int flags; scalar_t__ start; TYPE_1__* dev; scalar_t__ iv_offset; int * key; int key_string; int cipher_string; } ;
typedef int status_type_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_4, status_type_t VAR_5,
    unsigned VAR_6, char *VAR_7, unsigned VAR_8)
{
 struct crypt_config *VAR_9 = VAR_4->private;
 unsigned VAR_10, VAR_11 = 0;
 int VAR_12 = 0;

 switch (VAR_5) {
 case 129:
  VAR_7[0] = '\0';
  break;

 case 128:
  FUNC_0("%s ", VAR_9->cipher_string);

  if (VAR_9->key_size > 0) {
   if (VAR_9->key_string)
    FUNC_0(":%u:%s", VAR_9->key_size, VAR_9->key_string);
   else
    for (VAR_10 = 0; VAR_10 < VAR_9->key_size; VAR_10++)
     FUNC_0("%02x", VAR_9->key[VAR_10]);
  } else
   FUNC_0("-");

  FUNC_0(" %llu %s %llu", (unsigned long long)VAR_9->iv_offset,
    VAR_9->dev->name, (unsigned long long)VAR_9->start);

  VAR_12 += !!VAR_4->num_discard_bios;
  VAR_12 += FUNC_1(VAR_2, &VAR_9->flags);
  VAR_12 += FUNC_1(VAR_1, &VAR_9->flags);
  VAR_12 += VAR_9->sector_size != (1 << VAR_3);
  VAR_12 += FUNC_1(VAR_0, &VAR_9->cipher_flags);
  if (VAR_9->on_disk_tag_size)
   VAR_12++;
  if (VAR_12) {
   FUNC_0(" %d", VAR_12);
   if (VAR_4->num_discard_bios)
    FUNC_0(" allow_discards");
   if (FUNC_1(VAR_2, &VAR_9->flags))
    FUNC_0(" same_cpu_crypt");
   if (FUNC_1(VAR_1, &VAR_9->flags))
    FUNC_0(" submit_from_crypt_cpus");
   if (VAR_9->on_disk_tag_size)
    FUNC_0(" integrity:%u:%s", VAR_9->on_disk_tag_size, VAR_9->cipher_auth);
   if (VAR_9->sector_size != (1 << VAR_3))
    FUNC_0(" sector_size:%d", VAR_9->sector_size);
   if (FUNC_1(VAR_0, &VAR_9->cipher_flags))
    FUNC_0(" iv_large_sectors");
  }

  break;
 }
}
