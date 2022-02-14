
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; char* path; } ;
struct TYPE_5__ {scalar_t__ mode; char* path; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; int status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int FILE ;


 char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,float,...) ;
 char FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(FILE *VAR_0, const git_diff_delta *VAR_1, float VAR_2)
{
 char VAR_3 = FUNC_2(VAR_1->status);
 char VAR_4 = FUNC_0(VAR_1->old_file.mode);
 char VAR_5 = FUNC_0(VAR_1->new_file.mode);

 FUNC_1(VAR_0, "%c\t%s", VAR_3, VAR_1->old_file.path);

 if ((VAR_1->old_file.path != VAR_1->new_file.path &&
   FUNC_3(VAR_1->old_file.path, VAR_1->new_file.path) != 0) ||
  (VAR_1->old_file.mode != VAR_1->new_file.mode &&
   VAR_1->old_file.mode != 0 && VAR_1->new_file.mode != 0))
  FUNC_1(VAR_0, "%c %s%c", VAR_4, VAR_1->new_file.path, VAR_5);
 else if (VAR_4 != ' ')
  FUNC_1(VAR_0, "%c", VAR_4);

 FUNC_1(VAR_0, "\t[%.2f]\n", VAR_2);
}
