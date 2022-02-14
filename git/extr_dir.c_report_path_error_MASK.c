
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int original; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const char *VAR_0,
        const struct pathspec *VAR_1)
{



 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  int VAR_4, VAR_5;

  if (VAR_0[VAR_2])
   continue;






  for (VAR_5 = VAR_4 = 0;
       !VAR_5 && VAR_4 < VAR_1->nr;
       VAR_4++) {
   if (VAR_4 == VAR_2 || !VAR_0[VAR_4])
    continue;
   if (!FUNC_2(VAR_1->items[VAR_4].original,
        VAR_1->items[VAR_2].original))



    VAR_5 = 1;
  }
  if (VAR_5)
   continue;

  FUNC_1(FUNC_0("pathspec '%s' did not match any file(s) known to git"),
        VAR_1->items[VAR_2].original);
  VAR_3++;
 }
 return VAR_3;
}
