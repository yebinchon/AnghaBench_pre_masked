
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct dm_rq_target_io* end_io_data; } ;
struct dm_rq_target_io {int orig; } ;
typedef int blk_status_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_0, blk_status_t VAR_1)
{
 struct dm_rq_target_io *VAR_2 = VAR_0->end_io_data;

 FUNC_0(VAR_2->orig, VAR_1);
}
