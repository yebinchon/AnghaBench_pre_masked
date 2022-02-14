
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_9__ {scalar_t__ key; } ;
typedef TYPE_3__ git_attr_session ;
struct TYPE_8__ {int oid; int stamp; } ;
struct TYPE_10__ {scalar_t__ session_key; int source; TYPE_2__ cache_data; TYPE_1__* entry; scalar_t__ nonexistent; } ;
typedef TYPE_4__ git_attr_file ;
struct TYPE_7__ {int path; int fullpath; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

int FUNC_7(
 git_repository *VAR_1,
 git_attr_session *VAR_2,
 git_attr_file *VAR_3)
{
 if (!VAR_3)
  return 1;




 if (VAR_2 && VAR_2->key == VAR_3->session_key)
  return 0;
 else if (VAR_3->nonexistent)
  return 1;

 switch (VAR_3->source) {
 case 128:
  return 0;

 case 131:
  return FUNC_2(
   &VAR_3->cache_data.stamp, VAR_3->entry->fullpath);

 case 129: {
  int VAR_4;
  git_oid VAR_5;

  if ((VAR_4 = FUNC_0(
    &VAR_5, VAR_1, VAR_3->entry->path)) < 0)
   return VAR_4;

  return (FUNC_3(&VAR_3->cache_data.oid, &VAR_5) != 0);
 }

 case 130: {
  git_tree *VAR_6;
  int VAR_7;

  if ((VAR_7 = FUNC_4(&VAR_6, VAR_1)) < 0)
   return VAR_7;

  VAR_7 = FUNC_3(&VAR_3->cache_data.oid, FUNC_6(VAR_6));

  FUNC_5(VAR_6);
  return VAR_7;
 }

 default:
  FUNC_1(VAR_0, "invalid file type %d", VAR_3->source);
  return -1;
 }
}
