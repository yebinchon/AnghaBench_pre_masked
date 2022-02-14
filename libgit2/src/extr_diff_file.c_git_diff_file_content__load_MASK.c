
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ git_diff_options ;
struct TYPE_13__ {int flags; scalar_t__ src; TYPE_1__* file; } ;
typedef TYPE_3__ git_diff_file_content ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

int FUNC_3(
 git_diff_file_content *VAR_4,
 git_diff_options *VAR_5)
{
 int VAR_6 = 0;

 if ((VAR_4->flags & VAR_1) != 0)
  return 0;

 if ((VAR_4->file->flags & VAR_0) != 0 &&
  (VAR_5->flags & VAR_2) == 0)
  return 0;

 if (VAR_4->src == VAR_3)
  VAR_6 = FUNC_2(VAR_4, VAR_5);
 else
  VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->flags |= VAR_1;

 FUNC_0(VAR_4);

 return 0;
}
