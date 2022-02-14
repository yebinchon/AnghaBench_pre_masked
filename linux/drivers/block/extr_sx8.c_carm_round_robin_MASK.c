
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct carm_host {int dummy; } ;


 int FUNC_0 (char*,struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 struct request_queue* FUNC_2 (struct carm_host*) ;

__attribute__((used)) static inline void FUNC_3(struct carm_host *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_0("STARTED QUEUE %p\n", VAR_1);
 }
}
