
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int pin; } ;


 unsigned int FUNC_0 (struct bkey*) ;
 TYPE_1__* FUNC_1 (struct cache_set*,struct bkey*,unsigned int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cache_set*,struct bkey*,unsigned int) ;

void FUNC_4(struct cache_set *VAR_0, struct bkey *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_3(VAR_0, VAR_1, VAR_2))
   FUNC_2(&FUNC_1(VAR_0, VAR_1, VAR_2)->pin);
}
