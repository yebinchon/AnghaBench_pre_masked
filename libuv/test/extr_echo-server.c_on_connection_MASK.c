
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_7__ {struct TYPE_7__* data; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;


 int FUNC_0 (int) ;


 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(uv_stream_t* VAR_5, int VAR_6) {
  uv_stream_t* VAR_7;
  int VAR_8;

  if (VAR_6 != 0) {
    FUNC_2(VAR_4, "Connect error %s\n", FUNC_5(VAR_6));
  }
  FUNC_0(VAR_6 == 0);

  switch (VAR_3) {
  case 128:
    VAR_7 = FUNC_3(sizeof(uv_tcp_t));
    FUNC_0(VAR_7 != ((void*)0));
    VAR_8 = FUNC_8(VAR_2, (uv_tcp_t*)VAR_7);
    FUNC_0(VAR_8 == 0);
    break;

  case 129:
    VAR_7 = FUNC_3(sizeof(uv_pipe_t));
    FUNC_0(VAR_7 != ((void*)0));
    VAR_8 = FUNC_6(VAR_2, (uv_pipe_t*)VAR_7, 0);
    FUNC_0(VAR_8 == 0);
    break;

  default:
    FUNC_0(0 && "Bad serverType");
    FUNC_1();
  }


  VAR_7->data = VAR_5;

  VAR_8 = FUNC_4(VAR_5, VAR_7);
  FUNC_0(VAR_8 == 0);

  VAR_8 = FUNC_7(VAR_7, VAR_1, VAR_0);
  FUNC_0(VAR_8 == 0);
}
