
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int (* end_io ) (struct dm_buffer*,int ) ;} ;
struct bio {int bi_status; struct dm_buffer* bi_private; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct dm_buffer*,int ) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct dm_buffer *VAR_1 = VAR_0->bi_private;
 blk_status_t VAR_2 = VAR_0->bi_status;
 FUNC_0(VAR_0);
 VAR_1->end_io(VAR_1, VAR_2);
}
