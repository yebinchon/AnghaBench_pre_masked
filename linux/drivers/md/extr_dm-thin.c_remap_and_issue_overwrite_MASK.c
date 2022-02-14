
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int dummy; } ;
struct dm_thin_new_mapping {int saved_bi_end_io; struct bio* bio; } ;
struct dm_thin_endio_hook {struct dm_thin_new_mapping* overwrite_mapping; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;


 struct dm_thin_endio_hook* FUNC_0 (struct bio*,int) ;
 int FUNC_1 (struct pool*,struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (struct thin_c*,struct bio*,int ) ;
 int FUNC_3 (struct bio*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct thin_c *VAR_1, struct bio *VAR_2,
          dm_block_t VAR_3,
          struct dm_thin_new_mapping *VAR_4)
{
 struct pool *VAR_5 = VAR_1->pool;
 struct dm_thin_endio_hook *VAR_6 = FUNC_0(VAR_2, sizeof(struct dm_thin_endio_hook));

 VAR_6->overwrite_mapping = VAR_4;
 VAR_4->bio = VAR_2;
 FUNC_3(VAR_2, &VAR_4->saved_bi_end_io, VAR_0);
 FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_1, VAR_2, VAR_3);
}
