
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct foreach_state {int data; int (* cb ) (int *,int ) ;scalar_t__ dir_len; } ;
typedef int git_oid ;
struct TYPE_3__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, git_buf *VAR_1)
{
 git_oid VAR_2;
 struct foreach_state *VAR_3 = (struct foreach_state *) VAR_0;

 if (FUNC_0(&VAR_2, VAR_1->ptr + VAR_3->dir_len) < 0)
  return 0;

 return FUNC_1(
  VAR_3->cb(&VAR_2, VAR_3->data), "git_odb_foreach");
}
