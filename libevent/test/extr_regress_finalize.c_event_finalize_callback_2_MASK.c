
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_and_count {int count; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event*) ;

__attribute__((used)) static void
FUNC_1(struct event *VAR_0, void *VAR_1)
{
 struct event_and_count *VAR_2 = VAR_1;
 VAR_2->count += 100;
 FUNC_0(VAR_0);
}
