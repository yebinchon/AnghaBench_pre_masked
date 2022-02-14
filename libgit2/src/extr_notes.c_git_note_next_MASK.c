
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_note_iterator ;
struct TYPE_3__ {int path; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__ const**,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(
 git_oid* VAR_0,
 git_oid* VAR_1,
 git_note_iterator *VAR_2)
{
 int VAR_3;
 const git_index_entry *VAR_4;

 if ((VAR_3 = FUNC_1(&VAR_4, VAR_2)) < 0)
  return VAR_3;

 FUNC_2(VAR_0, &VAR_4->id);

 if (!(VAR_3 = FUNC_3(VAR_4->path, VAR_1)))
  FUNC_0(((void*)0), VAR_2);

 return VAR_3;
}
