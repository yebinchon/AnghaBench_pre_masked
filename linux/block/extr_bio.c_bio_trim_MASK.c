
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (struct bio*,int) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;

void FUNC_3(struct bio *VAR_0, int VAR_1, int VAR_2)
{




 VAR_2 <<= 9;
 if (VAR_1 == 0 && VAR_2 == VAR_0->bi_iter.bi_size)
  return;

 FUNC_0(VAR_0, VAR_1 << 9);
 VAR_0->bi_iter.bi_size = VAR_2;

 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);

}
