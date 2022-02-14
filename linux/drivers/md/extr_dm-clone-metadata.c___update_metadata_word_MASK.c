
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int bitset_root; int bitset_info; int region_map; int nr_regions; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,unsigned long,int *) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_clone_metadata *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = VAR_2 * VAR_0;
 unsigned long VAR_5 = FUNC_2(VAR_1->nr_regions, (VAR_2 + 1) * VAR_0);

 while (VAR_4 < VAR_5) {
  if (FUNC_3(VAR_4, VAR_1->region_map)) {
   VAR_3 = FUNC_1(&VAR_1->bitset_info, VAR_1->bitset_root,
           VAR_4, &VAR_1->bitset_root);

   if (VAR_3) {
    FUNC_0("dm_bitset_set_bit failed");
    return VAR_3;
   }
  }
  VAR_4++;
 }

 return 0;
}
