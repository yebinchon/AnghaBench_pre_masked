
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_hash_ctx ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ git_buf_vec ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(git_oid *VAR_0, git_buf_vec *VAR_1, size_t VAR_2)
{
 git_hash_ctx VAR_3;
 size_t VAR_4;
 int VAR_5 = 0;

 if (FUNC_1(&VAR_3) < 0)
  return -1;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if ((VAR_5 = FUNC_3(&VAR_3, VAR_1[VAR_4].data, VAR_1[VAR_4].len)) < 0)
   goto done;
 }

 VAR_5 = FUNC_2(VAR_0, &VAR_3);

done:
 FUNC_0(&VAR_3);

 return VAR_5;
}
