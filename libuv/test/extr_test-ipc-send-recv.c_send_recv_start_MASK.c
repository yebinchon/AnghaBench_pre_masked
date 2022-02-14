
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_2__ {int channel; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(void) {
  int VAR_3;
  FUNC_0(1 == FUNC_2((uv_stream_t*)&VAR_1));
  FUNC_0(1 == FUNC_3((uv_stream_t*)&VAR_1));
  FUNC_0(0 == FUNC_1((uv_handle_t*)&VAR_1));

  VAR_3 = FUNC_4((uv_stream_t*)&VAR_1, VAR_0, VAR_2);
  FUNC_0(VAR_3 == 0);
}
