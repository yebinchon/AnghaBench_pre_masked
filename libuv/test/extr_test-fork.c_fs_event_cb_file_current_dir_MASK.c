
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;
typedef int uv_fs_event_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(uv_fs_event_t* VAR_1,
                                         const char* VAR_2,
                                         int VAR_3,
                                         int VAR_4) {
  FUNC_0(VAR_0 == 0);
  ++VAR_0;
  FUNC_0(VAR_4 == 0);

  FUNC_0(FUNC_1(VAR_2, "watch_file") == 0);



  FUNC_2((uv_handle_t*)VAR_1, ((void*)0));
}
