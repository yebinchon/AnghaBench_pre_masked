
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_entry {int name; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_2, const struct cache_entry *VAR_3, int VAR_4,
         int VAR_5)
{
 while (VAR_4 < VAR_1 &&
        !FUNC_3(VAR_0[VAR_4]->name, VAR_3->name)) {
  if (FUNC_1(VAR_0[VAR_4]) == VAR_2)
   return 0;
  VAR_4++;
 }
 if (!VAR_5)
  return 0;
 if (VAR_2 == 2)
  return FUNC_2(FUNC_0("path '%s' does not have our version"), VAR_3->name);
 else
  return FUNC_2(FUNC_0("path '%s' does not have their version"), VAR_3->name);
}
