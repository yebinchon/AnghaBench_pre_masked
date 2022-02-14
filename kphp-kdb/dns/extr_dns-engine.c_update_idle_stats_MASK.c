
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int workers_max_idle_percent; int workers_average_idle_percent; int workers_max_recent_idle_percent; int workers_recent_idle_percent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_0 (void) {
  const int VAR_6 = VAR_2 - VAR_3;
  VAR_5.workers_max_idle_percent = VAR_5.workers_average_idle_percent = VAR_6 > 0 ? VAR_4 / VAR_6 * 100 : 0,
  VAR_5.workers_max_recent_idle_percent = VAR_5.workers_recent_idle_percent = VAR_0 > 0 ? VAR_1 / VAR_0 * 100 : VAR_1;
}
