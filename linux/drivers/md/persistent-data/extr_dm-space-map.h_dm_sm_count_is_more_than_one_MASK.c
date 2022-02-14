
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int (* count_is_more_than_one ) (struct dm_space_map*,int ,int*) ;} ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_space_map*,int ,int*) ;

__attribute__((used)) static inline int FUNC_1(struct dm_space_map *VAR_0,
            dm_block_t VAR_1, int *VAR_2)
{
 return VAR_0->count_is_more_than_one(VAR_0, VAR_1, VAR_2);
}
