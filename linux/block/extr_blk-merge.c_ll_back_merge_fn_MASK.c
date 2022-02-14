
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*,int ) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*,struct bio*) ;
 int FUNC_6 (struct request*,struct bio*,unsigned int) ;
 scalar_t__ FUNC_7 (struct request*,struct bio*) ;
 int FUNC_8 (int ,struct request*) ;

int FUNC_9(struct request *VAR_0, struct bio *VAR_1, unsigned int VAR_2)
{
 if (FUNC_7(VAR_0, VAR_1))
  return 0;
 if (FUNC_1(VAR_0) &&
     FUNC_5(VAR_0, VAR_1))
  return 0;
 if (FUNC_4(VAR_0) + FUNC_0(VAR_1) >
     FUNC_2(VAR_0, FUNC_3(VAR_0))) {
  FUNC_8(VAR_0->q, VAR_0);
  return 0;
 }

 return FUNC_6(VAR_0, VAR_1, VAR_2);
}
