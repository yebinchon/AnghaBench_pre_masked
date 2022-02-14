
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int chunk_sectors; int log; int r5c_cached_full_stripes; } ;


 int FUNC_0 (struct r5conf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct r5conf *VAR_1)
{
 if (!FUNC_3(VAR_1->log))
  return;





 if (FUNC_1(&VAR_1->r5c_cached_full_stripes) >=
     FUNC_2(FUNC_0(VAR_1),
  VAR_1->chunk_sectors >> VAR_0))
  FUNC_4(VAR_1->log, 0);
}
