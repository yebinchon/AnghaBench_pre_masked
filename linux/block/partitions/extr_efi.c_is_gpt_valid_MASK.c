
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct parsed_partitions {int bdev; } ;
struct TYPE_9__ {int partition_entry_array_crc32; int sizeof_partition_entry; int num_partition_entries; int first_usable_lba; int last_usable_lba; int my_lba; int header_crc32; int header_size; int signature; } ;
typedef TYPE_1__ gpt_header ;
typedef TYPE_1__ gpt_entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct parsed_partitions*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct parsed_partitions*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned char const*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(struct parsed_partitions *VAR_2, u64 VAR_3,
   gpt_header **VAR_4, gpt_entry **VAR_5)
{
 u32 VAR_6, VAR_7;
 u64 VAR_8, VAR_9;

 if (!VAR_5)
  return 0;
 if (!(*VAR_4 = FUNC_1(VAR_2, VAR_3)))
  return 0;


 if (FUNC_8((*VAR_4)->signature) != VAR_0) {
  FUNC_9("GUID Partition Table Header signature is wrong:"
    "%lld != %lld\n",
    (unsigned long long)FUNC_8((*VAR_4)->signature),
    (unsigned long long)VAR_0);
  goto fail;
 }


 if (FUNC_7((*VAR_4)->header_size) >
   FUNC_2(VAR_2->bdev)) {
  FUNC_9("GUID Partition Table Header size is too large: %u > %u\n",
   FUNC_7((*VAR_4)->header_size),
   FUNC_2(VAR_2->bdev));
  goto fail;
 }


 if (FUNC_7((*VAR_4)->header_size) < sizeof(gpt_header)) {
  FUNC_9("GUID Partition Table Header size is too small: %u < %zu\n",
   FUNC_7((*VAR_4)->header_size),
   sizeof(gpt_header));
  goto fail;
 }


 VAR_7 = FUNC_7((*VAR_4)->header_crc32);
 (*VAR_4)->header_crc32 = 0;
 VAR_6 = FUNC_4((const unsigned char *) (*VAR_4), FUNC_7((*VAR_4)->header_size));

 if (VAR_6 != VAR_7) {
  FUNC_9("GUID Partition Table Header CRC is wrong: %x != %x\n",
    VAR_6, VAR_7);
  goto fail;
 }
 (*VAR_4)->header_crc32 = FUNC_3(VAR_7);



 if (FUNC_8((*VAR_4)->my_lba) != VAR_3) {
  FUNC_9("GPT my_lba incorrect: %lld != %lld\n",
    (unsigned long long)FUNC_8((*VAR_4)->my_lba),
    (unsigned long long)VAR_3);
  goto fail;
 }




 VAR_8 = FUNC_6(VAR_2->bdev);
 if (FUNC_8((*VAR_4)->first_usable_lba) > VAR_8) {
  FUNC_9("GPT: first_usable_lba incorrect: %lld > %lld\n",
    (unsigned long long)FUNC_8((*VAR_4)->first_usable_lba),
    (unsigned long long)VAR_8);
  goto fail;
 }
 if (FUNC_8((*VAR_4)->last_usable_lba) > VAR_8) {
  FUNC_9("GPT: last_usable_lba incorrect: %lld > %lld\n",
    (unsigned long long)FUNC_8((*VAR_4)->last_usable_lba),
    (unsigned long long)VAR_8);
  goto fail;
 }
 if (FUNC_8((*VAR_4)->last_usable_lba) < FUNC_8((*VAR_4)->first_usable_lba)) {
  FUNC_9("GPT: last_usable_lba incorrect: %lld > %lld\n",
    (unsigned long long)FUNC_8((*VAR_4)->last_usable_lba),
    (unsigned long long)FUNC_8((*VAR_4)->first_usable_lba));
  goto fail;
 }

 if (FUNC_7((*VAR_4)->sizeof_partition_entry) != sizeof(gpt_entry)) {
  FUNC_9("GUID Partition Entry Size check failed.\n");
  goto fail;
 }


 VAR_9 = (u64)FUNC_7((*VAR_4)->num_partition_entries) *
  FUNC_7((*VAR_4)->sizeof_partition_entry);
 if (VAR_9 > VAR_1) {
  FUNC_9("GUID Partition Table is too large: %llu > %lu bytes\n",
    (unsigned long long)VAR_9, VAR_1);
  goto fail;
 }

 if (!(*VAR_5 = FUNC_0(VAR_2, *VAR_4)))
  goto fail;


 VAR_6 = FUNC_4((const unsigned char *) (*VAR_5), VAR_9);

 if (VAR_6 != FUNC_7((*VAR_4)->partition_entry_array_crc32)) {
  FUNC_9("GUID Partition Entry Array CRC check failed.\n");
  goto fail_ptes;
 }


 return 1;

 fail_ptes:
 FUNC_5(*VAR_5);
 *VAR_5 = ((void*)0);
 fail:
 FUNC_5(*VAR_4);
 *VAR_4 = ((void*)0);
 return 0;
}
