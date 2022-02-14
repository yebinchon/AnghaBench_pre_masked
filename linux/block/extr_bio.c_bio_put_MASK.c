
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int __bi_cnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;

void FUNC_5(struct bio *VAR_1)
{
 if (!FUNC_3(VAR_1, VAR_0))
  FUNC_4(VAR_1);
 else {
  FUNC_0(!FUNC_2(&VAR_1->__bi_cnt));




  if (FUNC_1(&VAR_1->__bi_cnt))
   FUNC_4(VAR_1);
 }
}
