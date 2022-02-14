
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int dummy; } ;
struct bucket {scalar_t__ prio; int gen; } ;
struct bkey {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct bkey*) ;
 struct bucket* FUNC_1 (struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_2 (struct bkey*,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (struct cache_set*,int,struct bkey*) ;
 scalar_t__ FUNC_4 (struct bkey*,int *) ;
 scalar_t__ FUNC_5 (struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_6 (struct cache_set*,struct bkey*,unsigned int) ;

void FUNC_7(struct cache_set *VAR_3, int VAR_4, struct bkey *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
  if (FUNC_5(VAR_3, VAR_5, VAR_6) &&
      !FUNC_6(VAR_3, VAR_5, VAR_6)) {
   struct bucket *VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_6);

   VAR_7->gen = FUNC_2(VAR_5, VAR_6);

   if (VAR_4 && FUNC_4(VAR_5, &VAR_2))
    VAR_7->prio = VAR_0;
   else if (!VAR_4 && VAR_7->prio == VAR_0)
    VAR_7->prio = VAR_1;
  }

 FUNC_3(VAR_3, VAR_4, VAR_5);
}
