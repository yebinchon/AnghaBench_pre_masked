
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_iter; } ;


 int FUNC_0 (struct bio*,int *,unsigned int) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,unsigned int) ;

void FUNC_3(struct bio *VAR_0, unsigned VAR_1)
{
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0, VAR_1);

 FUNC_0(VAR_0, &VAR_0->bi_iter, VAR_1);
}
