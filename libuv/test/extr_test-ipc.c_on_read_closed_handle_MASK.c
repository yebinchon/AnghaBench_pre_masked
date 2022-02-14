
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ uv_buf_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_2,
                                  ssize_t VAR_3,
                                  const uv_buf_t* VAR_4) {
  if (VAR_3 == 0 || VAR_3 == VAR_0) {
    FUNC_1(VAR_4->base);
    return;
  }

  if (VAR_3 < 0) {
    FUNC_2("error recving on channel: %s\n", FUNC_3(VAR_3));
    FUNC_0();
  }

  VAR_1 += VAR_3;
  FUNC_1(VAR_4->base);
}
