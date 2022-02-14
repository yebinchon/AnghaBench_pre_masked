
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int origin; } ;
typedef TYPE_1__ git_diff_line ;
typedef int git_diff_hunk ;
typedef int git_diff_delta ;
struct TYPE_5__ {int line_dels; int line_adds; int line_ctxt; int lines; } ;
typedef TYPE_2__ diff_expects ;
 int FUNC_0 (int const*) ;

int FUNC_1(
 const git_diff_delta *VAR_0,
 const git_diff_hunk *VAR_1,
 const git_diff_line *VAR_2,
 void *VAR_3)
{
 diff_expects *VAR_4 = VAR_3;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 VAR_4->lines++;
 switch (VAR_2->origin) {
 case 131:
 case 130:
  VAR_4->line_ctxt++;
  break;
 case 133:
 case 132:
  VAR_4->line_adds++;
  break;
 case 129:
 case 128:
  VAR_4->line_dels++;
  break;
 default:
  break;
 }
 return 0;
}
