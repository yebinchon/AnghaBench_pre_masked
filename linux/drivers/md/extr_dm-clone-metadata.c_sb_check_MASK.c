
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct superblock_disk {scalar_t__ csum; scalar_t__ version; int flags; int magic; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,scalar_t__,unsigned long long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 struct superblock_disk* FUNC_2 (struct dm_block*) ;
 scalar_t__ FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int *,size_t,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dm_block_validator *VAR_7, struct dm_block *VAR_8,
      size_t VAR_9)
{
 struct superblock_disk *VAR_10;
 u32 VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_8);

 if (FUNC_3(VAR_8) != FUNC_6(VAR_10->blocknr)) {
  FUNC_0("Superblock check failed: blocknr %llu, expected %llu",
        FUNC_6(VAR_10->blocknr),
        (unsigned long long)FUNC_3(VAR_8));
  return -VAR_4;
 }

 if (FUNC_6(VAR_10->magic) != VAR_6) {
  FUNC_0("Superblock check failed: magic %llu, expected %llu",
        FUNC_6(VAR_10->magic),
        (unsigned long long)VAR_6);
  return -VAR_2;
 }

 VAR_11 = FUNC_4(&VAR_10->flags, VAR_9 - sizeof(__le32),
         VAR_5);
 if (VAR_10->csum != FUNC_1(VAR_11)) {
  FUNC_0("Superblock check failed: checksum %u, expected %u",
        VAR_11, FUNC_5(VAR_10->csum));
  return -VAR_2;
 }


 VAR_12 = FUNC_5(VAR_10->version);
 if (VAR_12 < VAR_1 ||
     VAR_12 > VAR_0) {
  FUNC_0("Clone metadata version %u found, but only versions between %u and %u supported.",
        VAR_12, VAR_1,
        VAR_0);
  return -VAR_3;
 }

 return 0;
}
