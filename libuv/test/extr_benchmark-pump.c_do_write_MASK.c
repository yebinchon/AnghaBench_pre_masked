
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_stream_t ;
struct TYPE_3__ {char* base; int len; } ;
typedef TYPE_1__ uv_buf_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(uv_stream_t* VAR_2) {
  uv_write_t* VAR_3;
  uv_buf_t VAR_4;
  int VAR_5;

  VAR_4.base = (char*) &VAR_0;
  VAR_4.len = sizeof VAR_0;

  VAR_3 = (uv_write_t*) FUNC_1();
  VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_4, 1, VAR_1);
  FUNC_0(VAR_5 == 0);
}
