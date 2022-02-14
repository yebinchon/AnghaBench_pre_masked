
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {scalar_t__ oid_valid; int dirty_submodule; int oid; int path; } ;
struct diff_filepair {struct diff_filespec* two; struct diff_filespec* one; } ;


 scalar_t__ FUNC_0 (struct diff_filespec*) ;
 scalar_t__ FUNC_1 (struct diff_filepair*) ;
 scalar_t__ FUNC_2 (struct diff_filepair*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(struct diff_filepair *VAR_0)
{





 struct diff_filespec *VAR_1 = VAR_0->one, *VAR_2 = VAR_0->two;

 if (FUNC_2(VAR_0))
  return 0;




 if (FUNC_0(VAR_1) != FUNC_0(VAR_2) ||
     FUNC_1(VAR_0) ||
     FUNC_4(VAR_1->path, VAR_2->path))
  return 0;




 if (VAR_1->oid_valid && VAR_2->oid_valid &&
     FUNC_3(&VAR_1->oid, &VAR_2->oid) &&
     !VAR_1->dirty_submodule && !VAR_2->dirty_submodule)
  return 1;
 if (!VAR_1->oid_valid && !VAR_2->oid_valid)
  return 1;
 return 0;
}
