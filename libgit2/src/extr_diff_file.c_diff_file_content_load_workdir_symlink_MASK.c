
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_7__ {scalar_t__ len; int data; } ;
struct TYPE_8__ {TYPE_2__ map; TYPE_1__* file; int flags; int repo; } ;
typedef TYPE_3__ git_diff_file_content ;
typedef int git_buf ;
struct TYPE_6__ {int size; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(
 git_diff_file_content *VAR_3, git_buf *VAR_4)
{
 ssize_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if ((VAR_8 = FUNC_5(
  &VAR_7, VAR_3->repo, VAR_0)) < 0)
  return -1;

 if (!VAR_7)
  return FUNC_1(VAR_3, VAR_4);




 VAR_5 = (ssize_t)(VAR_3->file->size * 2) + 1;

 VAR_3->map.data = FUNC_2(VAR_5, sizeof(char));
 FUNC_0(VAR_3->map.data);

 VAR_3->flags |= VAR_1;

 VAR_6 = FUNC_6(FUNC_3(VAR_4), VAR_3->map.data, VAR_5);
 if (VAR_6 < 0) {
  FUNC_4(VAR_2, "failed to read symlink '%s'", VAR_3->file->path);
  return -1;
 }

 VAR_3->map.len = VAR_6;
 return 0;
}
