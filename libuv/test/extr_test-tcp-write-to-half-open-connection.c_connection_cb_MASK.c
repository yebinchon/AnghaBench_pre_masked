
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_10__ {char* base; int len; } ;
typedef TYPE_2__ uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_2__*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_6, int VAR_7) {
  int VAR_8;
  uv_buf_t VAR_9;

  FUNC_0(VAR_6 == (uv_stream_t*)&VAR_3);
  FUNC_0(VAR_7 == 0);

  VAR_8 = FUNC_3(VAR_6->loop, &VAR_2);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_1(VAR_6, (uv_stream_t*)&VAR_2);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_2((uv_stream_t*)&VAR_2, VAR_0, VAR_1);
  FUNC_0(VAR_8 == 0);

  VAR_9.base = "hello\n";
  VAR_9.len = 6;

  VAR_8 = FUNC_4(&VAR_5, (uv_stream_t*)&VAR_2, &VAR_9, 1, VAR_4);
  FUNC_0(VAR_8 == 0);
}
