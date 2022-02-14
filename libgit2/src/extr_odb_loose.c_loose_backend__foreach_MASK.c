
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct foreach_state {int dir_len; void* data; scalar_t__ cb; } ;
typedef int state ;
struct TYPE_2__ {char* objects_dir; } ;
typedef TYPE_1__ loose_backend ;
typedef scalar_t__ git_odb_foreach_cb ;
typedef int git_odb_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ,struct foreach_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct foreach_state*,int ,int) ;

__attribute__((used)) static int FUNC_8(git_odb_backend *VAR_2, git_odb_foreach_cb VAR_3, void *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 git_buf VAR_7 = VAR_0;
 struct foreach_state VAR_8;
 loose_backend *VAR_9 = (loose_backend *) VAR_2;

 FUNC_0(VAR_9 && VAR_3);

 VAR_5 = VAR_9->objects_dir;

 FUNC_4(&VAR_7, VAR_5);
 FUNC_6(&VAR_7);
 if (FUNC_3(&VAR_7))
  return -1;

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cb = VAR_3;
 VAR_8.data = VAR_4;
 VAR_8.dir_len = FUNC_2(&VAR_7);

 VAR_6 = FUNC_5(&VAR_7, 0, VAR_1, &VAR_8);

 FUNC_1(&VAR_7);

 return VAR_6;
}
