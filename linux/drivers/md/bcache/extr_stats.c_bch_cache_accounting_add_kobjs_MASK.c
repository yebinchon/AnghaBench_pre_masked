
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {int kobj; } ;
struct cache_accounting {TYPE_1__ day; TYPE_4__ hour; TYPE_3__ five_minute; TYPE_2__ total; } ;


 int FUNC_0 (int *,struct kobject*,char*) ;

int FUNC_1(struct cache_accounting *VAR_0,
       struct kobject *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->total.kobj, VAR_1,
         "stats_total");
 VAR_2 = VAR_2 ?: FUNC_0(&VAR_0->five_minute.kobj, VAR_1,
     "stats_five_minute");
 VAR_2 = VAR_2 ?: FUNC_0(&VAR_0->hour.kobj, VAR_1,
     "stats_hour");
 VAR_2 = VAR_2 ?: FUNC_0(&VAR_0->day.kobj, VAR_1,
     "stats_day");
 return VAR_2;
}
