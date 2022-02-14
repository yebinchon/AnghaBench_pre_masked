
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpages {int dummy; } ;
struct TYPE_2__ {int context; int fn; } ;
struct dm_io_request {TYPE_1__ notify; int bi_op_flags; int bi_op; int client; } ;
struct dm_io_region {scalar_t__ count; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned int,struct dm_io_region*,int ,int ,struct dpages*,int ,int ) ;
 int FUNC_1 (struct dm_io_request*,struct dpages*,unsigned long) ;
 int FUNC_2 (int ,unsigned int,struct dm_io_region*,int ,int ,struct dpages*,unsigned long*) ;

int FUNC_3(struct dm_io_request *VAR_1, unsigned VAR_2,
   struct dm_io_region *VAR_3, unsigned long *VAR_4)
{
 int VAR_5;
 struct dpages VAR_6;

 VAR_5 = FUNC_1(VAR_1, &VAR_6, (unsigned long)VAR_3->count << VAR_0);
 if (VAR_5)
  return VAR_5;

 if (!VAR_1->notify.fn)
  return FUNC_2(VAR_1->client, VAR_2, VAR_3,
          VAR_1->bi_op, VAR_1->bi_op_flags, &VAR_6,
          VAR_4);

 return FUNC_0(VAR_1->client, VAR_2, VAR_3, VAR_1->bi_op,
   VAR_1->bi_op_flags, &VAR_6, VAR_1->notify.fn,
   VAR_1->notify.context);
}
