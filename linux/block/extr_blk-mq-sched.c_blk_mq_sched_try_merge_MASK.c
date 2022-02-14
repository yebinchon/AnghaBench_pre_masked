
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct bio {int dummy; } ;





 struct request* FUNC_0 (struct request_queue*,struct request*) ;
 struct request* FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request*,struct bio*,unsigned int) ;
 int FUNC_3 (struct request_queue*,struct request*,struct bio*) ;
 int FUNC_4 (struct request*,struct bio*,unsigned int) ;
 int FUNC_5 (struct request_queue*,struct request*,struct bio*) ;
 int FUNC_6 (struct request_queue*,struct request**,struct bio*) ;
 int FUNC_7 (struct request_queue*,struct request*,int const) ;

bool FUNC_8(struct request_queue *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2, struct request **VAR_3)
{
 struct request *VAR_4;

 switch (FUNC_6(VAR_0, &VAR_4, VAR_1)) {
 case 130:
  if (!FUNC_5(VAR_0, VAR_4, VAR_1))
   return 0;
  if (!FUNC_2(VAR_4, VAR_1, VAR_2))
   return 0;
  *VAR_3 = FUNC_0(VAR_0, VAR_4);
  if (!*VAR_3)
   FUNC_7(VAR_0, VAR_4, 130);
  return 1;
 case 128:
  if (!FUNC_5(VAR_0, VAR_4, VAR_1))
   return 0;
  if (!FUNC_4(VAR_4, VAR_1, VAR_2))
   return 0;
  *VAR_3 = FUNC_1(VAR_0, VAR_4);
  if (!*VAR_3)
   FUNC_7(VAR_0, VAR_4, 128);
  return 1;
 case 129:
  return FUNC_3(VAR_0, VAR_4, VAR_1);
 default:
  return 0;
 }
}
