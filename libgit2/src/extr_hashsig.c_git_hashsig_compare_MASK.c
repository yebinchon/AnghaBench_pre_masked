
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {int opt; TYPE_2__ maxs; TYPE_2__ mins; int lines; } ;
typedef TYPE_1__ git_hashsig ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

int FUNC_1(const git_hashsig *VAR_3, const git_hashsig *VAR_4)
{




 if (VAR_3->mins.size == 0 && VAR_4->mins.size == 0) {
  if ((!VAR_3->lines && !VAR_4->lines) ||
   (VAR_3->opt & VAR_0))
   return VAR_2;
  else
   return 0;
 }




 if (VAR_3->mins.size < VAR_1)
  return FUNC_0(&VAR_3->mins, &VAR_4->mins);
 else
  return (FUNC_0(&VAR_3->mins, &VAR_4->mins) +
    FUNC_0(&VAR_3->maxs, &VAR_4->maxs)) / 2;
}
