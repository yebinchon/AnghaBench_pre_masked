
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int my_lba; int alternate_lba; int partition_entry_array_crc32; int sizeof_partition_entry; int num_partition_entries; int disk_guid; int last_usable_lba; int first_usable_lba; } ;
typedef TYPE_1__ gpt_header ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(gpt_header *VAR_0, gpt_header *VAR_1, u64 VAR_2)
{
 int VAR_3 = 0;
 if (!VAR_0 || !VAR_1)
  return;
 if (FUNC_2(VAR_0->my_lba) != FUNC_2(VAR_1->alternate_lba)) {
  FUNC_3("GPT:Primary header LBA != Alt. header alternate_lba\n");
  FUNC_3("GPT:%lld != %lld\n",
         (unsigned long long)FUNC_2(VAR_0->my_lba),
                       (unsigned long long)FUNC_2(VAR_1->alternate_lba));
  VAR_3++;
 }
 if (FUNC_2(VAR_0->alternate_lba) != FUNC_2(VAR_1->my_lba)) {
  FUNC_3("GPT:Primary header alternate_lba != Alt. header my_lba\n");
  FUNC_3("GPT:%lld != %lld\n",
         (unsigned long long)FUNC_2(VAR_0->alternate_lba),
                       (unsigned long long)FUNC_2(VAR_1->my_lba));
  VAR_3++;
 }
 if (FUNC_2(VAR_0->first_usable_lba) !=
            FUNC_2(VAR_1->first_usable_lba)) {
  FUNC_3("GPT:first_usable_lbas don't match.\n");
  FUNC_3("GPT:%lld != %lld\n",
         (unsigned long long)FUNC_2(VAR_0->first_usable_lba),
                       (unsigned long long)FUNC_2(VAR_1->first_usable_lba));
  VAR_3++;
 }
 if (FUNC_2(VAR_0->last_usable_lba) !=
            FUNC_2(VAR_1->last_usable_lba)) {
  FUNC_3("GPT:last_usable_lbas don't match.\n");
  FUNC_3("GPT:%lld != %lld\n",
         (unsigned long long)FUNC_2(VAR_0->last_usable_lba),
                       (unsigned long long)FUNC_2(VAR_1->last_usable_lba));
  VAR_3++;
 }
 if (FUNC_0(VAR_0->disk_guid, VAR_1->disk_guid)) {
  FUNC_3("GPT:disk_guids don't match.\n");
  VAR_3++;
 }
 if (FUNC_1(VAR_0->num_partition_entries) !=
            FUNC_1(VAR_1->num_partition_entries)) {
  FUNC_3("GPT:num_partition_entries don't match: "
         "0x%x != 0x%x\n",
         FUNC_1(VAR_0->num_partition_entries),
         FUNC_1(VAR_1->num_partition_entries));
  VAR_3++;
 }
 if (FUNC_1(VAR_0->sizeof_partition_entry) !=
            FUNC_1(VAR_1->sizeof_partition_entry)) {
  FUNC_3("GPT:sizeof_partition_entry values don't match: "
         "0x%x != 0x%x\n",
                       FUNC_1(VAR_0->sizeof_partition_entry),
         FUNC_1(VAR_1->sizeof_partition_entry));
  VAR_3++;
 }
 if (FUNC_1(VAR_0->partition_entry_array_crc32) !=
            FUNC_1(VAR_1->partition_entry_array_crc32)) {
  FUNC_3("GPT:partition_entry_array_crc32 values don't match: "
         "0x%x != 0x%x\n",
                       FUNC_1(VAR_0->partition_entry_array_crc32),
         FUNC_1(VAR_1->partition_entry_array_crc32));
  VAR_3++;
 }
 if (FUNC_2(VAR_0->alternate_lba) != VAR_2) {
  FUNC_3("GPT:Primary header thinks Alt. header is not at the end of the disk.\n");
  FUNC_3("GPT:%lld != %lld\n",
   (unsigned long long)FUNC_2(VAR_0->alternate_lba),
   (unsigned long long)VAR_2);
  VAR_3++;
 }

 if (FUNC_2(VAR_1->my_lba) != VAR_2) {
  FUNC_3("GPT:Alternate GPT header not at the end of the disk.\n");
  FUNC_3("GPT:%lld != %lld\n",
   (unsigned long long)FUNC_2(VAR_1->my_lba),
   (unsigned long long)VAR_2);
  VAR_3++;
 }

 if (VAR_3)
  FUNC_3("GPT: Use GNU Parted to correct GPT errors.\n");
 return;
}
