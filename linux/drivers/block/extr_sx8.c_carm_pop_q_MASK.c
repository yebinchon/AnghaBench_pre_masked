
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct carm_host {unsigned int wait_q_prod; unsigned int wait_q_cons; struct request_queue** wait_q; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct request_queue *FUNC_0(struct carm_host *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1->wait_q_prod == VAR_1->wait_q_cons)
  return ((void*)0);

 VAR_2 = VAR_1->wait_q_cons % VAR_0;
 VAR_1->wait_q_cons++;

 return VAR_1->wait_q[VAR_2];
}
