
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;


 int FUNC_0 (int *,char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
 git_buf *VAR_0,
 const git_diff_delta *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 if (FUNC_1(&VAR_1->old_file.id))
  VAR_3 = "/dev/null";

 if (FUNC_1(&VAR_1->new_file.id))
  VAR_4 = "/dev/null";

 return FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);
}
