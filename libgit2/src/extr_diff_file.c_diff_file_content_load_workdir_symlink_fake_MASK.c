
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int data; int len; } ;
struct TYPE_12__ {int flags; TYPE_1__ map; } ;
typedef TYPE_2__ git_diff_file_content ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(
 git_diff_file_content *VAR_2, git_buf *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 int VAR_5;

 if ((VAR_5 = FUNC_3(&VAR_4, VAR_3->ptr)) < 0)
  return VAR_5;

 VAR_2->map.len = FUNC_2(&VAR_4);
 VAR_2->map.data = FUNC_0(&VAR_4);
 VAR_2->flags |= VAR_1;

 FUNC_1(&VAR_4);
 return VAR_5;
}
