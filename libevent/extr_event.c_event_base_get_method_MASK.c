
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_base {TYPE_1__* evsel; } ;
struct TYPE_2__ {char const* name; } ;


 int FUNC_0 (struct event_base const*) ;

const char *
FUNC_1(const struct event_base *VAR_0)
{
 FUNC_0(VAR_0);
 return (VAR_0->evsel->name);
}
