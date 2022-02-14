
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {scalar_t__ csum; int flags; int magic; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct superblock_disk*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct superblock_disk* FUNC_3 (struct dm_block*) ;
 scalar_t__ FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int *,size_t,int ) ;
 unsigned long long FUNC_6 (scalar_t__) ;
 unsigned long long FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dm_block_validator *VAR_4,
      struct dm_block *VAR_5,
      size_t VAR_6)
{
 struct superblock_disk *VAR_7 = FUNC_3(VAR_5);
 __le32 VAR_8;

 if (FUNC_4(VAR_5) != FUNC_7(VAR_7->blocknr)) {
  FUNC_0("sb_check failed: blocknr %llu: wanted %llu",
        FUNC_7(VAR_7->blocknr),
        (unsigned long long)FUNC_4(VAR_5));
  return -VAR_1;
 }

 if (FUNC_7(VAR_7->magic) != VAR_3) {
  FUNC_0("sb_check failed: magic %llu: wanted %llu",
        FUNC_7(VAR_7->magic),
        (unsigned long long) VAR_3);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(FUNC_5(&VAR_7->flags,
          VAR_6 - sizeof(__le32),
          VAR_2));
 if (VAR_8 != VAR_7->csum) {
  FUNC_0("sb_check failed: csum %u: wanted %u",
        FUNC_6(VAR_8), FUNC_6(VAR_7->csum));
  return -VAR_0;
 }

 return FUNC_1(VAR_7);
}
