
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct event_counter* name; } ;
struct event_counter {TYPE_1__ attr; } ;


 struct event_counter* VAR_0 ;
 struct event_counter* VAR_1 ;
 struct event_counter* VAR_2 ;
 int FUNC_0 (struct event_counter*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct event_counter *VAR_4 = VAR_1;

 VAR_1 = ((void*)0);
 FUNC_0(VAR_4);

 if (VAR_2) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   FUNC_0(VAR_2[VAR_5].attr.name);

  FUNC_0(VAR_2);
 }
 FUNC_0(VAR_0);

 return;
}
