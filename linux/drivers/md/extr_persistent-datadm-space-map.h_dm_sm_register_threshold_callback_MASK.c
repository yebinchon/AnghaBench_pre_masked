
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_space_map {int (* register_threshold_callback ) (struct dm_space_map*,int ,int ,void*) ;} ;
typedef int dm_sm_threshold_fn ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_space_map*,int ,int ,void*) ;

__attribute__((used)) static inline int FUNC_1(struct dm_space_map *VAR_1,
          dm_block_t VAR_2,
          dm_sm_threshold_fn VAR_3,
          void *VAR_4)
{
 if (VAR_1->register_threshold_callback)
  return VAR_1->register_threshold_callback(VAR_1, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
