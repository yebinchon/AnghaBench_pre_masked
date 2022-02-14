
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int totals ;
struct TYPE_5__ {int lines; } ;
typedef TYPE_1__ git_patch ;
struct TYPE_6__ {int origin; } ;
typedef TYPE_2__ git_diff_line ;





 TYPE_2__* FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t*,int ,int) ;

int FUNC_3(
 size_t *VAR_0,
 size_t *VAR_1,
 size_t *VAR_2,
 const git_patch *VAR_3)
{
 size_t VAR_4[3], VAR_5;

 FUNC_2(VAR_4, 0, sizeof(VAR_4));

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3->lines); ++VAR_5) {
  git_diff_line *VAR_6 = FUNC_0(VAR_3->lines, VAR_5);
  if (!VAR_6)
   continue;

  switch (VAR_6->origin) {
  case 129: VAR_4[0]++; break;
  case 130: VAR_4[1]++; break;
  case 128: VAR_4[2]++; break;
  default:



   break;
  }
 }

 if (VAR_0)
  *VAR_0 = VAR_4[0];
 if (VAR_1)
  *VAR_1 = VAR_4[1];
 if (VAR_2)
  *VAR_2 = VAR_4[2];

 return 0;
}
