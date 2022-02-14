
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; } ;
struct pool {int pmd; } ;
struct dm_thin_new_mapping {scalar_t__ data_block; scalar_t__ virt_end; scalar_t__ virt_begin; struct thin_c* tc; } ;
struct discard_op {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (struct discard_op*,struct thin_c*,struct bio*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (struct discard_op*,int) ;
 int FUNC_3 (struct discard_op*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dm_thin_new_mapping *VAR_0,
         struct bio *VAR_1)
{




 int VAR_2 = 0;
 bool VAR_3 = 1;
 struct thin_c *VAR_4 = VAR_0->tc;
 struct pool *VAR_5 = VAR_4->pool;
 dm_block_t VAR_6 = VAR_0->data_block, VAR_7, VAR_8 = VAR_0->data_block + VAR_0->virt_end - VAR_0->virt_begin;
 struct discard_op VAR_9;

 FUNC_0(&VAR_9, VAR_4, VAR_1);
 while (VAR_6 != VAR_8) {

  for (; VAR_6 < VAR_8; VAR_6++) {
   VAR_2 = FUNC_1(VAR_5->pmd, VAR_6, &VAR_3);
   if (VAR_2)
    goto out;

   if (!VAR_3)
    break;
  }

  if (VAR_6 == VAR_8)
   break;


  for (VAR_7 = VAR_6 + 1; VAR_7 != VAR_8; VAR_7++) {
   VAR_2 = FUNC_1(VAR_5->pmd, VAR_7, &VAR_3);
   if (VAR_2)
    goto out;

   if (VAR_3)
    break;
  }

  VAR_2 = FUNC_3(&VAR_9, VAR_6, VAR_7);
  if (VAR_2)
   goto out;

  VAR_6 = VAR_7;
 }
out:
 FUNC_2(&VAR_9, VAR_2);
}
