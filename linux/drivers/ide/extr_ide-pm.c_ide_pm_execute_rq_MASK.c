
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int rq_flags; struct request_queue* q; } ;
struct TYPE_2__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request_queue*,int *,struct request*,int) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request_queue*) ;
 TYPE_1__* FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct request *VAR_4)
{
 struct request_queue *VAR_5 = VAR_4->q;

 if (FUNC_4(FUNC_2(VAR_5))) {
  VAR_4->rq_flags |= VAR_3;
  FUNC_3(VAR_4)->result = -VAR_2;
  FUNC_1(VAR_4, VAR_0);
  return -VAR_2;
 }
 FUNC_0(VAR_5, ((void*)0), VAR_4, 1);

 return FUNC_3(VAR_4)->result ? -VAR_1 : 0;
}
