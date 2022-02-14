
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int q; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*,int ) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*,struct bio*) ;
 int FUNC_5 (struct request*,struct bio*,unsigned int) ;
 scalar_t__ FUNC_6 (struct request*,struct bio*) ;
 int FUNC_7 (int ,struct request*) ;

int FUNC_8(struct request *VAR_0, struct bio *VAR_1, unsigned int VAR_2)
{
 if (FUNC_6(VAR_0, VAR_1))
  return 0;
 if (FUNC_1(VAR_0) &&
     FUNC_4(VAR_0, VAR_1))
  return 0;
 if (FUNC_3(VAR_0) + FUNC_0(VAR_1) >
     FUNC_2(VAR_0, VAR_1->bi_iter.bi_sector)) {
  FUNC_7(VAR_0->q, VAR_0);
  return 0;
 }

 return FUNC_5(VAR_0, VAR_1, VAR_2);
}
