
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int nr_regions; int region_map; int bitset_root; int bitset_info; } ;
struct dm_bitset_cursor {int dummy; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,int ,int,struct dm_bitset_cursor*) ;
 int FUNC_3 (struct dm_bitset_cursor*) ;
 scalar_t__ FUNC_4 (struct dm_bitset_cursor*) ;
 int FUNC_5 (struct dm_bitset_cursor*) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dm_clone_metadata *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct dm_bitset_cursor VAR_3;


 VAR_1 = FUNC_6(&VAR_0->bitset_info, VAR_0->bitset_root, &VAR_0->bitset_root);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(&VAR_0->bitset_info, VAR_0->bitset_root, VAR_0->nr_regions, &VAR_3);
 if (VAR_1)
  return VAR_1;

 for (VAR_2 = 0; ; VAR_2++) {
  if (FUNC_4(&VAR_3))
   FUNC_1(VAR_2, VAR_0->region_map);
  else
   FUNC_0(VAR_2, VAR_0->region_map);

  if (VAR_2 >= (VAR_0->nr_regions - 1))
   break;

  VAR_1 = FUNC_5(&VAR_3);

  if (VAR_1)
   break;
 }

 FUNC_3(&VAR_3);

 return VAR_1;
}
