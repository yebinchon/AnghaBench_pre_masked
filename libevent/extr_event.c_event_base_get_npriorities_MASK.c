
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int nactivequeues; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 struct event_base* VAR_0 ;
 int VAR_1 ;

int
FUNC_2(struct event_base *VAR_2)
{

 int VAR_3;
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0;

 FUNC_0(VAR_2, VAR_1);
 VAR_3 = VAR_2->nactivequeues;
 FUNC_1(VAR_2, VAR_1);
 return (VAR_3);
}
