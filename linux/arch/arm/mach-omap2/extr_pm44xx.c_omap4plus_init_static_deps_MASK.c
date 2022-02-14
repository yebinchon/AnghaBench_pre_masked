
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_dep_map {scalar_t__ to; scalar_t__ from; } ;
struct clockdomain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clockdomain*,struct clockdomain*) ;
 struct clockdomain* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static inline int FUNC_3(const struct static_dep_map *VAR_1)
{
 int VAR_2;
 struct clockdomain *VAR_3, *VAR_4;

 if (!VAR_1)
  return 0;

 while (VAR_1->from) {
  VAR_3 = FUNC_1(VAR_1->from);
  VAR_4 = FUNC_1(VAR_1->to);
  if (!VAR_3 || !VAR_4) {
   FUNC_2("Failed lookup %s or %s for wakeup dependency\n",
          VAR_1->from, VAR_1->to);
   return -VAR_0;
  }
  VAR_2 = FUNC_0(VAR_3, VAR_4);
  if (VAR_2) {
   FUNC_2("Failed to add %s -> %s wakeup dependency(%d)\n",
          VAR_1->from, VAR_1->to, VAR_2);
   return VAR_2;
  }

  VAR_1++;
 }

 return 0;
}
