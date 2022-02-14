
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {struct dm_rq_target_io* end_io_data; int end_io; } ;
struct dm_rq_target_io {struct request* clone; TYPE_1__* md; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bs; } ;


 int FUNC_0 (struct request*,struct request*,int *,int ,int ,struct dm_rq_target_io*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct request *VAR_2, struct request *VAR_3,
         struct dm_rq_target_io *VAR_4, gfp_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_4->md->bs, VAR_5,
         VAR_0, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_2->end_io = VAR_1;
 VAR_2->end_io_data = VAR_4;

 VAR_4->clone = VAR_2;

 return 0;
}
