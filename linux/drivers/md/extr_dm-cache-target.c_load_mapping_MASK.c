
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cache {int policy; int dirty_bitset; int nr_dirty; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, dm_oblock_t VAR_1, dm_cblock_t VAR_2,
   bool VAR_3, uint32_t VAR_4, bool VAR_5)
{
 int VAR_6;
 struct cache *VAR_7 = VAR_0;

 if (VAR_3) {
  FUNC_4(FUNC_2(VAR_2), VAR_7->dirty_bitset);
  FUNC_0(&VAR_7->nr_dirty);
 } else
  FUNC_1(FUNC_2(VAR_2), VAR_7->dirty_bitset);

 VAR_6 = FUNC_3(VAR_7->policy, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 return 0;
}
