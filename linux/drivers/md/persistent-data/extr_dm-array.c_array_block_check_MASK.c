
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
struct array_block {scalar_t__ csum; int max_entries; int blocknr; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 struct array_block* FUNC_2 (struct dm_block*) ;
 scalar_t__ FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int *,size_t,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dm_block_validator *VAR_3,
        struct dm_block *VAR_4,
        size_t VAR_5)
{
 struct array_block *VAR_6 = FUNC_2(VAR_4);
 __le32 VAR_7;

 if (FUNC_3(VAR_4) != FUNC_6(VAR_6->blocknr)) {
  FUNC_0("array_block_check failed: blocknr %llu != wanted %llu",
       (unsigned long long) FUNC_6(VAR_6->blocknr),
       (unsigned long long) FUNC_3(VAR_4));
  return -VAR_2;
 }

 VAR_7 = FUNC_1(FUNC_4(&VAR_6->max_entries,
            VAR_5 - sizeof(__le32),
            VAR_0));
 if (VAR_7 != VAR_6->csum) {
  FUNC_0("array_block_check failed: csum %u != wanted %u",
       (unsigned) FUNC_5(VAR_7),
       (unsigned) FUNC_5(VAR_6->csum));
  return -VAR_1;
 }

 return 0;
}
