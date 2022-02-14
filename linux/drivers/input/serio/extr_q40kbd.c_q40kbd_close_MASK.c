
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct q40kbd* port_data; } ;
struct q40kbd {int dummy; } ;


 int FUNC_0 (struct q40kbd*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct q40kbd *VAR_1 = VAR_0->port_data;

 FUNC_1();
 FUNC_0(VAR_1);
}
