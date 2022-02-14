
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct branch {int merge_nr; TYPE_1__** merge; } ;
struct TYPE_2__ {int src; } ;


 int FUNC_0 (int ,char const*) ;

int FUNC_1(struct branch *VAR_0,
                   int VAR_1,
                   const char *VAR_2)
{
 if (!VAR_0 || VAR_1 < 0 || VAR_1 >= VAR_0->merge_nr)
  return 0;
 return FUNC_0(VAR_0->merge[VAR_1]->src, VAR_2);
}
