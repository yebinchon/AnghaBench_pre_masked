
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* data; scalar_t__ len; } ;
struct TYPE_4__ {int flags; int * blob; TYPE_2__ map; } ;
typedef TYPE_1__ git_diff_file_content ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(git_diff_file_content *VAR_4)
{
 if ((VAR_4->flags & VAR_2) == 0)
  return;

 if (VAR_4->flags & VAR_1) {
  FUNC_0(VAR_4->map.data);
  VAR_4->map.data = "";
  VAR_4->map.len = 0;
  VAR_4->flags &= ~VAR_1;
 }
 else if (VAR_4->flags & VAR_3) {
  FUNC_2(&VAR_4->map);
  VAR_4->map.data = "";
  VAR_4->map.len = 0;
  VAR_4->flags &= ~VAR_3;
 }

 if (VAR_4->flags & VAR_0) {
  FUNC_1((git_blob *)VAR_4->blob);
  VAR_4->blob = ((void*)0);
  VAR_4->flags &= ~VAR_0;
 }

 VAR_4->flags &= ~VAR_2;
}
