
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {int kobj; } ;
struct cache_accounting {int cl; int timer; int closing; TYPE_4__ day; TYPE_3__ hour; TYPE_2__ five_minute; TYPE_1__ total; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cache_accounting *VAR_0)
{
 FUNC_3(&VAR_0->total.kobj);
 FUNC_3(&VAR_0->five_minute.kobj);
 FUNC_3(&VAR_0->hour.kobj);
 FUNC_3(&VAR_0->day.kobj);

 FUNC_0(&VAR_0->closing, 1);
 if (FUNC_2(&VAR_0->timer))
  FUNC_1(&VAR_0->cl);
}
