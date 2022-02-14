
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct diff_filespec {int path; int count; int rename_used; } ;
struct diff_filepair {int renamed_pair; int score; } ;
struct TYPE_6__ {struct diff_filepair* pair; struct diff_filespec* two; } ;
struct TYPE_5__ {int score; TYPE_1__* p; } ;
struct TYPE_4__ {struct diff_filespec* one; } ;


 int FUNC_0 (char*) ;
 struct diff_filepair* FUNC_1 (int *,struct diff_filespec*,struct diff_filespec*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3, int VAR_4)
{
 struct diff_filespec *VAR_5, *VAR_6;
 struct diff_filepair *VAR_7;

 if (VAR_0[VAR_2].pair)
  FUNC_0("internal error: dst already matched.");

 VAR_5 = VAR_1[VAR_3].p->one;
 VAR_5->rename_used++;
 VAR_5->count++;

 VAR_6 = VAR_0[VAR_2].two;
 VAR_6->count++;

 VAR_7 = FUNC_1(((void*)0), VAR_5, VAR_6);
 VAR_7->renamed_pair = 1;
 if (!FUNC_2(VAR_5->path, VAR_6->path))
  VAR_7->score = VAR_1[VAR_3].score;
 else
  VAR_7->score = VAR_4;
 VAR_0[VAR_2].pair = VAR_7;
}
