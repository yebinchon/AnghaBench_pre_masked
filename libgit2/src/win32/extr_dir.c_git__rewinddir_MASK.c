
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_win32_path ;
struct TYPE_3__ {int first; int dir; int h; int f; } ;
typedef TYPE_1__ git__DIR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(git__DIR *VAR_2)
{
 git_win32_path VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2->h != VAR_1) {
  FUNC_0(VAR_2->h);
  VAR_2->h = VAR_1;
  VAR_2->first = 0;
 }

 if (!FUNC_3(VAR_3, VAR_2->dir))
  return;

 VAR_2->h = FUNC_1(VAR_3, &VAR_2->f);

 if (VAR_2->h == VAR_1)
  FUNC_2(VAR_0, "could not open directory '%s'", VAR_2->dir);
 else
  VAR_2->first = 1;
}
