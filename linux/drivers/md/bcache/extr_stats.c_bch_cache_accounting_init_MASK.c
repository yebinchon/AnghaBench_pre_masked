
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct closure {int dummy; } ;
struct TYPE_11__ {scalar_t__ expires; } ;
struct TYPE_9__ {int kobj; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_10__ {int kobj; } ;
struct cache_accounting {TYPE_5__ timer; int cl; TYPE_3__ day; TYPE_2__ hour; TYPE_1__ five_minute; TYPE_4__ total; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct closure*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;

void FUNC_4(struct cache_accounting *VAR_4,
          struct closure *VAR_5)
{
 FUNC_2(&VAR_4->total.kobj, &VAR_1);
 FUNC_2(&VAR_4->five_minute.kobj, &VAR_1);
 FUNC_2(&VAR_4->hour.kobj, &VAR_1);
 FUNC_2(&VAR_4->day.kobj, &VAR_1);

 FUNC_1(&VAR_4->cl, VAR_5);
 FUNC_3(&VAR_4->timer, VAR_3, 0);
 VAR_4->timer.expires = VAR_2 + VAR_0;
 FUNC_0(&VAR_4->timer);
}
