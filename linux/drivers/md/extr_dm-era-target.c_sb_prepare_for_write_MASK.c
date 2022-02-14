
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int flags; int csum; int blocknr; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct superblock_disk* FUNC_2 (struct dm_block*) ;
 int FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int *,size_t,int ) ;

__attribute__((used)) static void FUNC_5(struct dm_block_validator *VAR_1,
     struct dm_block *VAR_2,
     size_t VAR_3)
{
 struct superblock_disk *VAR_4 = FUNC_2(VAR_2);

 VAR_4->blocknr = FUNC_1(FUNC_3(VAR_2));
 VAR_4->csum = FUNC_0(FUNC_4(&VAR_4->flags,
      VAR_3 - sizeof(__le32),
      VAR_0));
}
