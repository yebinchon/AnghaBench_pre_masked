
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ib_mr {unsigned int page_size; TYPE_1__* device; } ;
struct TYPE_2__ {int (* map_mr_sg ) (struct ib_mr*,struct scatterlist*,int,unsigned int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mr*,struct scatterlist*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ib_mr *VAR_1, struct scatterlist *VAR_2, int VAR_3,
   unsigned int *VAR_4, unsigned int VAR_5)
{
 if (FUNC_1(!VAR_1->device->map_mr_sg))
  return -VAR_0;

 VAR_1->page_size = VAR_5;

 return VAR_1->device->map_mr_sg(VAR_1, VAR_2, VAR_3, VAR_4);
}
