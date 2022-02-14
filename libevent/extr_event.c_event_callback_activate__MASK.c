
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct event_base {int dummy; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 int FUNC_2 (struct event_base*,struct event_callback*) ;
 int VAR_0 ;

int
FUNC_3(struct event_base *VAR_1,
    struct event_callback *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_1, VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_0);
 return VAR_3;
}
