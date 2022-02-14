
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct page {int private; int lru; } ;
struct blk_mq_tags {struct request** static_rqs; int page_list; } ;
struct blk_mq_tag_set {int numa_node; scalar_t__ cmd_size; int * map; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_1 (int,int,int) ;
 int FUNC_2 (struct blk_mq_tag_set*,struct blk_mq_tags*,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (struct blk_mq_tag_set*,struct request*,unsigned int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (void*,size_t,int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (unsigned int,unsigned int) ;
 size_t FUNC_9 (int) ;
 void* FUNC_10 (struct page*) ;
 size_t FUNC_11 (scalar_t__,int ) ;

int FUNC_12(struct blk_mq_tag_set *VAR_7, struct blk_mq_tags *VAR_8,
       unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14 = 4;
 size_t VAR_15, VAR_16;
 int VAR_17;

 VAR_17 = FUNC_3(&VAR_7->map[VAR_2], VAR_9);
 if (VAR_17 == VAR_3)
  VAR_17 = VAR_7->numa_node;

 FUNC_0(&VAR_8->page_list);





 VAR_15 = FUNC_11(sizeof(struct request) + VAR_7->cmd_size,
    FUNC_5());
 VAR_16 = VAR_15 * VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_10; ) {
  int VAR_18 = VAR_14;
  struct page *VAR_19;
  int VAR_20;
  void *VAR_21;

  while (VAR_18 && VAR_16 < FUNC_9(VAR_18 - 1))
   VAR_18--;

  do {
   VAR_19 = FUNC_1(VAR_17,
    VAR_1 | VAR_5 | VAR_4 | VAR_6,
    VAR_18);
   if (VAR_19)
    break;
   if (!VAR_18--)
    break;
   if (FUNC_9(VAR_18) < VAR_15)
    break;
  } while (1);

  if (!VAR_19)
   goto fail;

  VAR_19->private = VAR_18;
  FUNC_7(&VAR_19->lru, &VAR_8->page_list);

  VAR_21 = FUNC_10(VAR_19);




  FUNC_6(VAR_21, FUNC_9(VAR_18), 1, VAR_1);
  VAR_13 = FUNC_9(VAR_18) / VAR_15;
  VAR_20 = FUNC_8(VAR_13, VAR_10 - VAR_11);
  VAR_16 -= VAR_20 * VAR_15;
  for (VAR_12 = 0; VAR_12 < VAR_20; VAR_12++) {
   struct request *VAR_22 = VAR_21;

   VAR_8->static_rqs[VAR_11] = VAR_22;
   if (FUNC_4(VAR_7, VAR_22, VAR_9, VAR_17)) {
    VAR_8->static_rqs[VAR_11] = ((void*)0);
    goto fail;
   }

   VAR_21 += VAR_15;
   VAR_11++;
  }
 }
 return 0;

fail:
 FUNC_2(VAR_7, VAR_8, VAR_9);
 return -VAR_0;
}
