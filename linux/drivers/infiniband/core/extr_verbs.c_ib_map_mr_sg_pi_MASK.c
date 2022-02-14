
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ib_mr {scalar_t__ type; unsigned int page_size; TYPE_2__* device; } ;
struct TYPE_3__ {int (* map_mr_sg_pi ) (struct ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ib_mr*,struct scatterlist*,int,unsigned int*,struct scatterlist*,int,unsigned int*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ib_mr *VAR_2, struct scatterlist *VAR_3,
      int VAR_4, unsigned int *VAR_5,
      struct scatterlist *VAR_6, int VAR_7,
      unsigned int *VAR_8, unsigned int VAR_9)
{
 if (FUNC_2(!VAR_2->device->ops.map_mr_sg_pi ||
       FUNC_0(VAR_2->type != VAR_1)))
  return -VAR_0;

 VAR_2->page_size = VAR_9;

 return VAR_2->device->ops.map_mr_sg_pi(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_7, VAR_8);
}
