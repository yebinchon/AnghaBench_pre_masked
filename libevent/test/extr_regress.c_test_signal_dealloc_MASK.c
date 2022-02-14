
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 () ;
 int FUNC_3 (struct event*,int *) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int ,int ,struct event*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(void)
{

 struct event VAR_3;
 struct event_base *VAR_4 = FUNC_2();
 FUNC_5(&VAR_3, VAR_0, VAR_1, &VAR_3);
 FUNC_3(&VAR_3, ((void*)0));
 FUNC_4(&VAR_3);
 FUNC_1(VAR_4);

 VAR_2 = 1;
 FUNC_0();
}
