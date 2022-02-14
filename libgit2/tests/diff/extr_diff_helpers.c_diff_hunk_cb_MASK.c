
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* header; int header_len; scalar_t__ new_lines; scalar_t__ old_lines; } ;
typedef TYPE_1__ git_diff_hunk ;
typedef int git_diff_delta ;
struct TYPE_5__ {int hunk_new_lines; int hunk_old_lines; int hunks; } ;
typedef TYPE_2__ diff_expects ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;

int FUNC_2(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 void *VAR_2)
{
 diff_expects *VAR_3 = VAR_2;
 const char *VAR_4 = VAR_1->header, *VAR_5 = VAR_4 + VAR_1->header_len;

 FUNC_0(VAR_0);


 while (VAR_4 < VAR_5)
  FUNC_1('\0' != *VAR_4++);

 VAR_3->hunks++;
 VAR_3->hunk_old_lines += VAR_1->old_lines;
 VAR_3->hunk_new_lines += VAR_1->new_lines;
 return 0;
}
