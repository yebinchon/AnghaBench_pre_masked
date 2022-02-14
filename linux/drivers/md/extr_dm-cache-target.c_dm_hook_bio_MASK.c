
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_hook_info {int * bi_end_io; } ;
struct bio {void* bi_private; int * bi_end_io; } ;
typedef int bio_end_io_t ;



__attribute__((used)) static void FUNC_0(struct dm_hook_info *VAR_0, struct bio *VAR_1,
   bio_end_io_t *VAR_2, void *VAR_3)
{
 VAR_0->bi_end_io = VAR_1->bi_end_io;

 VAR_1->bi_end_io = VAR_2;
 VAR_1->bi_private = VAR_3;
}
