
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbq_wait_state {int dummy; } ;
struct sbitmap_queue {struct sbq_wait_state* ws; } ;
struct blk_mq_hw_ctx {int wait_index; } ;


 struct sbq_wait_state* FUNC_0 (struct sbitmap_queue*,int *) ;

__attribute__((used)) static inline struct sbq_wait_state *FUNC_1(struct sbitmap_queue *VAR_0,
       struct blk_mq_hw_ctx *VAR_1)
{
 if (!VAR_1)
  return &VAR_0->ws[0];
 return FUNC_0(VAR_0, &VAR_1->wait_index);
}
