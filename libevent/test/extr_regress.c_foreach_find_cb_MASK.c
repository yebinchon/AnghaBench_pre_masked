
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct foreach_helper {int count; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;


 scalar_t__ FUNC_0 (struct event const*) ;
 struct foreach_helper* FUNC_1 (struct event const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(const struct event_base *VAR_1, const struct event *VAR_2, void *VAR_3)
{
 const struct event **VAR_4 = VAR_3;
 struct foreach_helper *VAR_5 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_2) != VAR_0)
  return 0;
 if (VAR_5->count == 99) {
  *VAR_4 = VAR_2;
  return 101;
 }
 return 0;
}
