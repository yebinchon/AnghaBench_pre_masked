
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct request* last_merge; } ;
struct request {int dummy; } ;


 scalar_t__ FUNC_0 (struct request_queue*,struct request*,struct request*) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request*) ;
 struct request* FUNC_4 (struct request_queue*,int ) ;

bool FUNC_5(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct request *VAR_2;
 bool VAR_3;

 if (FUNC_1(VAR_0))
  return 0;




 if (VAR_0->last_merge && FUNC_0(VAR_0, VAR_0->last_merge, VAR_1))
  return 1;

 if (FUNC_2(VAR_0))
  return 0;

 VAR_3 = 0;



 while (1) {
  VAR_2 = FUNC_4(VAR_0, FUNC_3(VAR_1));
  if (!VAR_2 || !FUNC_0(VAR_0, VAR_2, VAR_1))
   break;


  VAR_3 = 1;
  VAR_1 = VAR_2;
 }

 return VAR_3;
}
