
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_3__ {struct poll_ctx* poll_ctx; } ;
typedef TYPE_1__ uv_fs_poll_t ;
struct poll_ctx {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(uv_fs_poll_t* VAR_2, char* VAR_3, size_t* VAR_4) {
  struct poll_ctx* VAR_5;
  size_t VAR_6;

  if (!FUNC_3((uv_handle_t*)VAR_2)) {
    *VAR_4 = 0;
    return VAR_0;
  }

  VAR_5 = VAR_2->poll_ctx;
  FUNC_0(VAR_5 != ((void*)0));

  VAR_6 = FUNC_2(VAR_5->path);
  if (VAR_6 >= *VAR_4) {
    *VAR_4 = VAR_6 + 1;
    return VAR_1;
  }

  FUNC_1(VAR_3, VAR_5->path, VAR_6);
  *VAR_4 = VAR_6;
  VAR_3[VAR_6] = '\0';

  return 0;
}
