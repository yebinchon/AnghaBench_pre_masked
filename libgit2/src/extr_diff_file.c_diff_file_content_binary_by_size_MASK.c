
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ opts_max_size; TYPE_1__* file; } ;
typedef TYPE_2__ git_diff_file_content ;
struct TYPE_4__ {int flags; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(git_diff_file_content *VAR_2)
{

 if ((VAR_2->file->flags & VAR_0) == 0 &&
  VAR_2->opts_max_size > 0 &&
  VAR_2->file->size > VAR_2->opts_max_size)
  VAR_2->file->flags |= VAR_1;

 return ((VAR_2->file->flags & VAR_1) != 0);
}
