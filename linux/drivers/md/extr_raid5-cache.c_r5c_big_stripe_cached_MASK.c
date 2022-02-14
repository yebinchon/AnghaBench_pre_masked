
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {int big_stripe_tree; } ;
struct r5conf {struct r5l_log* log; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct r5conf*,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 () ;

bool FUNC_4(struct r5conf *VAR_0, sector_t VAR_1)
{
 struct r5l_log *VAR_2 = VAR_0->log;
 sector_t VAR_3;
 void *VAR_4;

 if (!VAR_2)
  return 0;

 FUNC_0(!FUNC_3());
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_4 = FUNC_2(&VAR_2->big_stripe_tree, VAR_3);
 return VAR_4 != ((void*)0);
}
