
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_load_info {scalar_t__ discard_end; scalar_t__ discard_begin; int block_size; } ;
typedef int sector_t ;
typedef int dm_dblock_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct discard_load_info*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, sector_t VAR_1,
   dm_dblock_t VAR_2, bool VAR_3)
{
 struct discard_load_info *VAR_4 = VAR_0;

 VAR_4->block_size = VAR_1;

 if (VAR_3) {
  if (FUNC_0(VAR_2) == VAR_4->discard_end)



   VAR_4->discard_end = VAR_4->discard_end + 1ULL;

  else {



   FUNC_1(VAR_4);
   VAR_4->discard_begin = FUNC_0(VAR_2);
   VAR_4->discard_end = VAR_4->discard_begin + 1ULL;
  }
 } else {
  FUNC_1(VAR_4);
  VAR_4->discard_begin = VAR_4->discard_end = 0;
 }

 return 0;
}
