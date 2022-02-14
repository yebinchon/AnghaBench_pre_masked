
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap_queue {int dummy; } ;
struct blk_mq_alloc_data {int flags; scalar_t__ shallow_depth; int hctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct sbitmap_queue*) ;
 int FUNC_1 (struct sbitmap_queue*,scalar_t__) ;
 int FUNC_2 (int ,struct sbitmap_queue*) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_alloc_data *VAR_1,
       struct sbitmap_queue *VAR_2)
{
 if (!(VAR_1->flags & VAR_0) &&
     !FUNC_2(VAR_1->hctx, VAR_2))
  return -1;
 if (VAR_1->shallow_depth)
  return FUNC_1(VAR_2, VAR_1->shallow_depth);
 else
  return FUNC_0(VAR_2);
}
