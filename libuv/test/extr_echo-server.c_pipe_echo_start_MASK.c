
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_fs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(char* VAR_8) {
  int VAR_9;


  {
    uv_fs_t VAR_10;
    FUNC_2(((void*)0), &VAR_10, VAR_8, ((void*)0));
    FUNC_1(&VAR_10);
  }


  VAR_5 = (uv_handle_t*)&VAR_4;
  VAR_6 = VAR_0;

  VAR_9 = FUNC_5(VAR_2, &VAR_4, 0);
  if (VAR_9) {
    FUNC_0(VAR_7, "uv_pipe_init: %s\n", FUNC_6(VAR_9));
    return 1;
  }

  VAR_9 = FUNC_4(&VAR_4, VAR_8);
  if (VAR_9) {
    FUNC_0(VAR_7, "uv_pipe_bind: %s\n", FUNC_6(VAR_9));
    return 1;
  }

  VAR_9 = FUNC_3((uv_stream_t*)&VAR_4, VAR_1, VAR_3);
  if (VAR_9) {
    FUNC_0(VAR_7, "uv_pipe_listen: %s\n", FUNC_6(VAR_9));
    return 1;
  }

  return 0;
}
