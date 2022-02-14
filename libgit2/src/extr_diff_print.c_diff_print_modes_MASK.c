
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mode; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(
 git_buf *VAR_0, const git_diff_delta *VAR_1)
{
 FUNC_1(VAR_0, "old mode %o\n", VAR_1->old_file.mode);
 FUNC_1(VAR_0, "new mode %o\n", VAR_1->new_file.mode);

 return FUNC_0(VAR_0) ? -1 : 0;
}
