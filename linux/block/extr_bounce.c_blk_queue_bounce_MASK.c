
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bounce_pfn; } ;
struct request_queue {int bounce_gfp; TYPE_1__ limits; } ;
struct bio {int dummy; } ;
typedef int mempool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct request_queue*,struct bio**,int *) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

void FUNC_4(struct request_queue *VAR_4, struct bio **VAR_5)
{
 mempool_t *VAR_6;




 if (!FUNC_2(*VAR_5))
  return;






 if (!(VAR_4->bounce_gfp & VAR_0)) {
  if (VAR_4->limits.bounce_pfn >= VAR_1)
   return;
  VAR_6 = &VAR_3;
 } else {
  FUNC_0(!FUNC_3(&VAR_2));
  VAR_6 = &VAR_2;
 }




 FUNC_1(VAR_4, VAR_5, VAR_6);
}
