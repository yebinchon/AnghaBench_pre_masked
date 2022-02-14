
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int i; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_6, ssize_t VAR_7, const uv_buf_t* VAR_8) {

  FUNC_0(VAR_6 != ((void*)0));





  FUNC_3((uv_handle_t*)VAR_6, VAR_2);

  if (VAR_7 < 0) {
    if (VAR_7 == VAR_1) {
      ;
    } else if (VAR_7 == VAR_0) {
      VAR_3++;
    } else {
      FUNC_1(VAR_5, "read error %s\n", FUNC_4(VAR_7));
      FUNC_0(0);
    }
  }
}
