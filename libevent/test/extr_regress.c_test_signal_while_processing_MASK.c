
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event_base*) ;
 int FUNC_2 () ;
 struct event_base* FUNC_3 () ;
 int FUNC_4 (struct event*,struct timeval*) ;
 int FUNC_5 (struct event*,int ,struct event*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct event*,int *) ;
 int VAR_2 ;
 int FUNC_8 (struct event*,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct event_base *VAR_5 = FUNC_3();
 struct event VAR_6, VAR_7;
 struct timeval VAR_8 = {0, 0};

 FUNC_6("Receiving a signal while processing other signal: ");

 VAR_1 = -1;
 VAR_3 = 1;
 FUNC_8(&VAR_6, VAR_0, VAR_2, ((void*)0));
 FUNC_7(&VAR_6, ((void*)0));
 FUNC_5(&VAR_7, VAR_4, &VAR_7);
 FUNC_4(&VAR_7, &VAR_8);
 FUNC_2();

 FUNC_1(VAR_5);
 FUNC_0();
 return;
}
