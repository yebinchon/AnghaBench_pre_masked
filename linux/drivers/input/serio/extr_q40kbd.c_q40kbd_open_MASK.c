
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct q40kbd* port_data; } ;
struct q40kbd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct q40kbd*) ;

__attribute__((used)) static int FUNC_2(struct serio *VAR_2)
{
 struct q40kbd *VAR_3 = VAR_2->port_data;

 FUNC_1(VAR_3);


 FUNC_0(-1, VAR_0);
 FUNC_0(1, VAR_1);

 return 0;
}
