
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct argv_array {int dummy; } ;
struct TYPE_2__ {int original; } ;


 int FUNC_0 (struct argv_array*,int ) ;

__attribute__((used)) static void FUNC_1(struct argv_array *VAR_0,
     const struct pathspec *VAR_1) {
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++)
  FUNC_0(VAR_0, VAR_1->items[VAR_2].original);
}
