
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_saved_query {int fail; int attempt; int pid; int qid; int out_type; } ;
struct TYPE_2__ {int attempt_num; int out_qid; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 struct tl_saved_query* FUNC_1 (int) ;

struct tl_saved_query *FUNC_2 (void) {
  struct tl_saved_query *VAR_4 = FUNC_1 (sizeof (struct tl_saved_query));
  VAR_4->out_type = VAR_1;
  VAR_4->qid = VAR_2.out_qid;
  FUNC_0 (VAR_0);
  VAR_4->pid = *VAR_0;
  VAR_4->attempt = VAR_2.attempt_num;
  VAR_4->fail = VAR_3;
  return VAR_4;
}
