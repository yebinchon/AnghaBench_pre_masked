
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int path; } ;
struct TYPE_13__ {int path; } ;
struct TYPE_16__ {TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_4__ git_diff_delta ;
struct TYPE_17__ {int ptr; } ;
typedef TYPE_5__ git_buf ;
struct TYPE_15__ {int num_lines; } ;
struct TYPE_18__ {int buf; TYPE_3__ line; } ;
typedef TYPE_6__ diff_print_info ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,char const*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(
 diff_print_info *VAR_1, git_diff_delta *VAR_2,
 const char *VAR_3, const char *VAR_4)
{
 git_buf VAR_5 = VAR_0, VAR_6 = VAR_0;
 int VAR_7;

 if ((VAR_7 = FUNC_0(
   &VAR_5, VAR_3, VAR_2->old_file.path)) < 0 ||
  (VAR_7 = FUNC_0(
   &VAR_6, VAR_4, VAR_2->new_file.path)) < 0)
  goto done;

 VAR_1->line.num_lines = 1;
 VAR_7 = FUNC_1(
  VAR_1->buf, VAR_2, "Binary files %s and %s differ\n",
  VAR_5.ptr, VAR_6.ptr);

done:
 FUNC_2(&VAR_5);
 FUNC_2(&VAR_6);

 return VAR_7;
}
