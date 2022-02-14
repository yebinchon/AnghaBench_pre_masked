
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* theirs; struct TYPE_12__* ours; struct TYPE_12__* ancestor; } ;
typedef TYPE_1__ git_index_name_entry ;
struct TYPE_14__ {scalar_t__ _alloc_size; } ;
struct TYPE_13__ {TYPE_5__ names; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(git_index *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;


 if (VAR_1->names._alloc_size == 0 &&
  FUNC_3(&VAR_1->names, 16, VAR_0) < 0)
  return -1;
 while (VAR_3) {
  git_index_name_entry *VAR_5 = FUNC_1(1, sizeof(git_index_name_entry));
  FUNC_0(VAR_5);

  VAR_4 = FUNC_0(VAR_2, VAR_3) + 1; if (VAR_3 < VAR_4) { FUNC_0("reading conflict name entries"); goto out_err; } if (VAR_4 == 1) VAR_5->ancestor = ((void*)0); else { VAR_5->ancestor = FUNC_0(VAR_4); FUNC_0(VAR_5->ancestor); memcpy(VAR_5->ancestor, VAR_2, VAR_4); } VAR_2 += VAR_4; VAR_3 -= VAR_4;;
  VAR_4 = FUNC_0(VAR_2, VAR_3) + 1; if (VAR_3 < VAR_4) { FUNC_0("reading conflict name entries"); goto out_err; } if (VAR_4 == 1) VAR_5->ours = ((void*)0); else { VAR_5->ours = FUNC_0(VAR_4); FUNC_0(VAR_5->ours); FUNC_0(VAR_5->ours, VAR_2, VAR_4); } VAR_2 += VAR_4; VAR_3 -= VAR_4;;
  VAR_4 = FUNC_0(VAR_2, VAR_3) + 1; if (VAR_3 < VAR_4) { FUNC_0("reading conflict name entries"); goto out_err; } if (VAR_4 == 1) VAR_5->theirs = ((void*)0); else { VAR_5->theirs = FUNC_0(VAR_4); FUNC_0(VAR_5->theirs); FUNC_0(VAR_5->theirs, VAR_2, VAR_4); } VAR_2 += VAR_4; VAR_3 -= VAR_4;;

  if (FUNC_4(&VAR_1->names, VAR_5) < 0)
   goto out_err;

  continue;

out_err:
  FUNC_2(VAR_5->ancestor);
  FUNC_2(VAR_5->ours);
  FUNC_2(VAR_5->theirs);
  FUNC_2(VAR_5);
  return -1;
 }




 FUNC_5(&VAR_1->names, 1);

 return 0;
}
