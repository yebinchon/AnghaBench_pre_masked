
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ evsig_caught; } ;
struct event_base {TYPE_1__ sig; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 () ;
 int FUNC_3 (struct event*,int *) ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int ,int ,struct event*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct event VAR_3;
 struct event_base *VAR_4 = FUNC_2();
 VAR_2 = 0;

 FUNC_5(&VAR_3, VAR_0, VAR_1, &VAR_3);
 FUNC_3(&VAR_3, ((void*)0));




 FUNC_4(&VAR_3);

 FUNC_7(FUNC_6(), VAR_0);
 VAR_2 = 1;


 FUNC_1(VAR_4);
 FUNC_0();
 return;
}
