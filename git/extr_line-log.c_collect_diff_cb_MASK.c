
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct collect_diff_cbdata {TYPE_1__* diff; } ;
struct TYPE_2__ {int target; int parent; } ;


 int FUNC_0 (int *,long,long) ;

__attribute__((used)) static int FUNC_1(long VAR_0, long VAR_1,
      long VAR_2, long VAR_3,
      void *VAR_4)
{
 struct collect_diff_cbdata *VAR_5 = VAR_4;

 if (VAR_1 >= 0)
  FUNC_0(&VAR_5->diff->parent, VAR_0, VAR_0 + VAR_1);
 if (VAR_3 >= 0)
  FUNC_0(&VAR_5->diff->target, VAR_2, VAR_2 + VAR_3);

 return 0;
}
