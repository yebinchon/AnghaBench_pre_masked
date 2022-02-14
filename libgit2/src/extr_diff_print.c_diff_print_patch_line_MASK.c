
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_diff_line ;
typedef int git_diff_hunk ;
struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_1__ new_file; } ;
typedef TYPE_2__ git_diff_delta ;
struct TYPE_8__ {int (* print_cb ) (TYPE_2__ const*,int const*,int const*,int ) ;int payload; } ;
typedef TYPE_3__ diff_print_info ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*,int const*,int const*,int ) ;

__attribute__((used)) static int FUNC_2(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 const git_diff_line *VAR_2,
 void *VAR_3)
{
 diff_print_info *VAR_4 = VAR_3;

 if (FUNC_0(VAR_0->new_file.mode))
  return 0;

 return VAR_4->print_cb(VAR_0, VAR_1, VAR_2, VAR_4->payload);
}
