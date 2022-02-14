
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t size; struct memobject** ptr; } ;
struct memory_packer_db {TYPE_1__ commits; } ;
struct memobject {int oid; } ;
typedef int git_repository ;
typedef int git_packbuilder ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(git_buf *VAR_0, git_repository *VAR_1, git_odb_backend *VAR_2)
{
 struct memory_packer_db *VAR_3 = (struct memory_packer_db *)VAR_2;
 git_packbuilder *VAR_4;
 uint32_t VAR_5;
 int VAR_6 = -1;

 if (FUNC_2(&VAR_4, VAR_1) < 0)
  return -1;

 for (VAR_5 = 0; VAR_5 < VAR_3->commits.size; ++VAR_5) {
  struct memobject *VAR_7 = VAR_3->commits.ptr[VAR_5];

  VAR_6 = FUNC_1(VAR_4, &VAR_7->oid);
  if (VAR_6 < 0)
   goto cleanup;
 }

 VAR_6 = FUNC_3(VAR_0, VAR_4);

cleanup:
 FUNC_0(VAR_4);
 return VAR_6;
}
