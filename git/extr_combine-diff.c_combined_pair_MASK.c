
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_filespec {int oid_valid; int has_more_entries; int oid; int mode; int path; } ;
struct diff_filepair {struct diff_filespec* two; struct diff_filespec* one; } ;
struct combine_diff_path {int oid; int mode; int path; TYPE_1__* parent; } ;
struct TYPE_2__ {int oid; int mode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,int) ;
 struct diff_filespec* FUNC_3 (int ,int) ;
 struct diff_filepair* FUNC_4 (int) ;

__attribute__((used)) static struct diff_filepair *FUNC_5(struct combine_diff_path *VAR_0,
        int VAR_1)
{
 int VAR_2;
 struct diff_filepair *VAR_3;
 struct diff_filespec *VAR_4;

 VAR_3 = FUNC_4(sizeof(*VAR_3));
 VAR_4 = FUNC_3(FUNC_2(VAR_1, 1), sizeof(struct diff_filespec));
 VAR_3->one = VAR_4 + 1;
 VAR_3->two = VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3->one[VAR_2].path = VAR_0->path;
  VAR_3->one[VAR_2].mode = VAR_0->parent[VAR_2].mode;
  FUNC_1(&VAR_3->one[VAR_2].oid, &VAR_0->parent[VAR_2].oid);
  VAR_3->one[VAR_2].oid_valid = !FUNC_0(&VAR_0->parent[VAR_2].oid);
  VAR_3->one[VAR_2].has_more_entries = 1;
 }
 VAR_3->one[VAR_1 - 1].has_more_entries = 0;

 VAR_3->two->path = VAR_0->path;
 VAR_3->two->mode = VAR_0->mode;
 FUNC_1(&VAR_3->two->oid, &VAR_0->oid);
 VAR_3->two->oid_valid = !FUNC_0(&VAR_0->oid);
 return VAR_3;
}
