
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int object_file_mode; int objects_dir; } ;
typedef TYPE_1__ loose_backend ;
typedef int header ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_object_t ;
typedef int git_filebuf ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,void const*,size_t) ;
 int FUNC_7 (size_t*,char*,int,size_t,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_1__*,int const*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(git_odb_backend *VAR_3, const git_oid *VAR_4, const void *VAR_5, size_t VAR_6, git_object_t VAR_7)
{
 int VAR_8 = 0;
 git_buf VAR_9 = VAR_0;
 char VAR_10[VAR_2];
 size_t VAR_11;
 git_filebuf VAR_12 = VAR_1;
 loose_backend *VAR_13;

 VAR_13 = (loose_backend *)VAR_3;


 if ((VAR_8 = FUNC_7(&VAR_11,
  VAR_10, sizeof(VAR_10), VAR_6, VAR_7)) < 0)
  goto cleanup;

 if (FUNC_2(&VAR_9, VAR_13->objects_dir, "tmp_object") < 0 ||
  FUNC_5(&VAR_12, VAR_9.ptr, FUNC_0(VAR_13),
   VAR_13->object_file_mode) < 0)
 {
  VAR_8 = -1;
  goto cleanup;
 }

 FUNC_6(&VAR_12, VAR_10, VAR_11);
 FUNC_6(&VAR_12, VAR_5, VAR_6);

 if (FUNC_8(&VAR_9, VAR_13, VAR_4) < 0 ||
  FUNC_9(&VAR_9, VAR_13) < 0 ||
  FUNC_4(&VAR_12, VAR_9.ptr) < 0)
  VAR_8 = -1;

cleanup:
 if (VAR_8 < 0)
  FUNC_3(&VAR_12);
 FUNC_1(&VAR_9);
 return VAR_8;
}
