
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
struct TYPE_2__ {scalar_t__ write_queue_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5(uv_handle_t* VAR_6) {
  uv_buf_t VAR_7;
  int VAR_8 = 1;

  VAR_4++;

  VAR_7 = FUNC_2("meow", 4);
  while (VAR_8 > 0)
    VAR_8 = FUNC_4((uv_stream_t*) &VAR_3, &VAR_7, 1);
  FUNC_1(VAR_5, "uv_try_write error: %d %s\n", VAR_8, FUNC_3(VAR_8));
  FUNC_0(VAR_8 == VAR_2 || VAR_8 == VAR_0 || VAR_8 == VAR_1);
  FUNC_0(VAR_3.write_queue_size == 0);
}
