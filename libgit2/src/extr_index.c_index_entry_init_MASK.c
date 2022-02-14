
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_13__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_14__ {int distrust_filemode; } ;
typedef TYPE_2__ git_index ;
struct TYPE_15__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,struct stat*,int *,int *,char const*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,char const*) ;
 int FUNC_5 (TYPE_1__*,struct stat*,int) ;
 int FUNC_6 (int ,struct stat*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__**,int *,char const*,struct stat*,int) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(
 git_index_entry **VAR_2,
 git_index *VAR_3,
 const char *VAR_4)
{
 int VAR_5 = 0;
 git_index_entry *VAR_6 = ((void*)0);
 git_buf VAR_7 = VAR_0;
 struct stat VAR_8;
 git_oid VAR_9;
 git_repository *VAR_10;

 if (FUNC_0(VAR_3) == ((void*)0))
  return FUNC_1(-1,
   "could not initialize index entry. "
   "Index is not backed up by an existing repository.");






 VAR_10 = FUNC_0(VAR_3);
 if (FUNC_7(VAR_10, "create blob from file") < 0)
  return VAR_1;

 if (FUNC_4(&VAR_7, FUNC_8(VAR_10), VAR_4) < 0)
  return -1;

 VAR_5 = FUNC_6(VAR_7.ptr, &VAR_8);
 FUNC_3(&VAR_7);

 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_9(&VAR_6, FUNC_0(VAR_3), VAR_4, &VAR_8, 1) < 0)
  return -1;


 VAR_5 = FUNC_2(
  &VAR_9, &VAR_8, FUNC_0(VAR_3), ((void*)0), VAR_4, 0, 1);

 if (VAR_5 < 0) {
  FUNC_10(VAR_6);
  return VAR_5;
 }

 VAR_6->id = VAR_9;
 FUNC_5(VAR_6, &VAR_8, !VAR_3->distrust_filemode);

 *VAR_2 = (git_index_entry *)VAR_6;
 return 0;
}
