
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int dummy; } ;
struct dm_thin_endio_hook {int * cell; int * overwrite_mapping; int * all_io_entry; int * shared_read_entry; struct thin_c* tc; } ;
struct bio {int dummy; } ;


 struct dm_thin_endio_hook* FUNC_0 (struct bio*,int) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct dm_thin_endio_hook *VAR_2 = FUNC_0(VAR_1, sizeof(struct dm_thin_endio_hook));

 VAR_2->tc = VAR_0;
 VAR_2->shared_read_entry = ((void*)0);
 VAR_2->all_io_entry = ((void*)0);
 VAR_2->overwrite_mapping = ((void*)0);
 VAR_2->cell = ((void*)0);
}
