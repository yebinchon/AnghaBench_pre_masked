
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_new_mapping {int status; int saved_bi_end_io; } ;
struct dm_thin_endio_hook {struct dm_thin_new_mapping* overwrite_mapping; } ;
struct bio {int bi_status; int bi_end_io; } ;


 int FUNC_0 (struct dm_thin_new_mapping*) ;
 struct dm_thin_endio_hook* FUNC_1 (struct bio*,int) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct dm_thin_endio_hook *VAR_1 = FUNC_1(VAR_0, sizeof(struct dm_thin_endio_hook));
 struct dm_thin_new_mapping *VAR_2 = VAR_1->overwrite_mapping;

 VAR_0->bi_end_io = VAR_2->saved_bi_end_io;

 VAR_2->status = VAR_0->bi_status;
 FUNC_0(VAR_2);
}
