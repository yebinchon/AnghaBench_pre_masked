
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int origin; int content; } ;
typedef TYPE_3__ git_diff_line ;
struct TYPE_12__ {int new_lines; int new_start; int old_lines; int old_start; } ;
typedef TYPE_4__ git_diff_hunk ;
struct TYPE_10__ {int path; } ;
struct TYPE_9__ {int path; } ;
struct TYPE_13__ {int status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_5__ git_diff_delta ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(
 const git_diff_delta *VAR_3,
 const git_diff_hunk *VAR_4,
 const git_diff_line *VAR_5,
 void *VAR_6)
{
 switch (VAR_5->origin) {
 case 129:
  FUNC_2(VAR_0, VAR_5->content);
  FUNC_0(VAR_4 == ((void*)0));
  goto check_delta;

 case 128:
  FUNC_2(VAR_1, VAR_5->content);
  goto check_hunk;

 case 131:
 case 130:
  if (VAR_6 != ((void*)0))
   return *(int *)VAR_6;
  goto check_hunk;

 default:

  return -1;
 }

check_hunk:
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_1(1, VAR_4->old_start);
 FUNC_1(2, VAR_4->old_lines);
 FUNC_1(0, VAR_4->new_start);
 FUNC_1(0, VAR_4->new_lines);

check_delta:
 FUNC_2("subdir.txt", VAR_3->old_file.path);
 FUNC_2("subdir.txt", VAR_3->new_file.path);
 FUNC_1(VAR_2, VAR_3->status);

 return 0;
}
