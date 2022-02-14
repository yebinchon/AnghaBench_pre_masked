
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_5, ssize_t VAR_6, const uv_buf_t* VAR_7) {
  if (VAR_2 == 0) {
    FUNC_0(VAR_4 == 0);
    FUNC_4(VAR_0);
    VAR_4 = FUNC_3(VAR_0);
  }

  if (VAR_6 < 0) {
    FUNC_2((uv_handle_t*)VAR_5, VAR_3);
    return;
  }

  FUNC_1(VAR_7);

  VAR_1 += VAR_6;
  VAR_2 += VAR_6;
}
