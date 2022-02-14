
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_hook_info {int bi_end_io; } ;
struct bio {int bi_end_io; } ;



__attribute__((used)) static void FUNC_0(struct dm_hook_info *VAR_0, struct bio *VAR_1)
{
 VAR_1->bi_end_io = VAR_0->bi_end_io;
}
