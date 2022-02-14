
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dm_rq_target_io {int error; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct request*) ;
 struct dm_rq_target_io* FUNC_1 (struct request*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0, blk_status_t VAR_1)
{
 struct dm_rq_target_io *VAR_2 = FUNC_1(VAR_0);

 VAR_2->error = VAR_1;
 FUNC_0(VAR_0);
}
