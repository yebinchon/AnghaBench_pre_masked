
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct sbq_wait_state {TYPE_2__ wait; } ;
struct TYPE_3__ {int entry; } ;
struct sbq_wait {TYPE_1__ wait; } ;
struct sbitmap_queue {int dummy; } ;
struct kyber_queue_data {struct sbitmap_queue* domain_tokens; } ;
struct kyber_hctx_data {unsigned int cur_domain; struct sbq_wait_state** domain_ws; int * wait_index; struct sbq_wait* domain_wait; } ;
struct blk_mq_hw_ctx {int dummy; } ;


 int FUNC_0 (struct sbitmap_queue*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sbitmap_queue*,struct sbq_wait_state*,struct sbq_wait*) ;
 int FUNC_3 (struct sbq_wait*) ;
 struct sbq_wait_state* FUNC_4 (struct sbitmap_queue*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct kyber_queue_data *VAR_0,
      struct kyber_hctx_data *VAR_1,
      struct blk_mq_hw_ctx *VAR_2)
{
 unsigned int VAR_3 = VAR_1->cur_domain;
 struct sbitmap_queue *VAR_4 = &VAR_0->domain_tokens[VAR_3];
 struct sbq_wait *VAR_5 = &VAR_1->domain_wait[VAR_3];
 struct sbq_wait_state *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);






 if (VAR_7 < 0 && FUNC_1(&VAR_5->wait.entry)) {
  VAR_6 = FUNC_4(VAR_4,
      &VAR_1->wait_index[VAR_3]);
  VAR_1->domain_ws[VAR_3] = VAR_6;
  FUNC_2(VAR_4, VAR_6, VAR_5);





  VAR_7 = FUNC_0(VAR_4);
 }
 if (VAR_7 >= 0 && !FUNC_1(&VAR_5->wait.entry)) {
  VAR_6 = VAR_1->domain_ws[VAR_3];
  FUNC_5(&VAR_6->wait.lock);
  FUNC_3(VAR_5);
  FUNC_6(&VAR_6->wait.lock);
 }

 return VAR_7;
}
