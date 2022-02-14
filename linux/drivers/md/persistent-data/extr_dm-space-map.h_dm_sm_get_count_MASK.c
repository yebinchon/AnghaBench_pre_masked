
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_space_map {int (* get_count ) (struct dm_space_map*,int ,int *) ;} ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_space_map*,int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct dm_space_map *VAR_0, dm_block_t VAR_1,
      uint32_t *VAR_2)
{
 return VAR_0->get_count(VAR_0, VAR_1, VAR_2);
}
