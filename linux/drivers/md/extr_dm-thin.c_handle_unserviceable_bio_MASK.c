
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int dummy; } ;
struct bio {scalar_t__ bi_status; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct pool*) ;

__attribute__((used)) static void FUNC_3(struct pool *VAR_0, struct bio *VAR_1)
{
 blk_status_t VAR_2 = FUNC_2(VAR_0);

 if (VAR_2) {
  VAR_1->bi_status = VAR_2;
  FUNC_0(VAR_1);
 } else
  FUNC_1(VAR_1);
}
