
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;
typedef int uv_fs_event_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(uv_fs_event_t* VAR_4, const char* VAR_5,
  int VAR_6, int VAR_7) {
  ++VAR_3;
  FUNC_0(VAR_4 == &VAR_2);
  FUNC_0(VAR_7 == 0);
  FUNC_0(VAR_6 == VAR_0);

  FUNC_0(FUNC_1(VAR_5, "file1") == 0);



  FUNC_0(0 == FUNC_3(VAR_4));
  FUNC_2((uv_handle_t*)VAR_4, VAR_1);
}
