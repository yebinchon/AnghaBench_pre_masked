
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_6__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(uv_stream_t* VAR_5, int VAR_6) {
  unsigned int VAR_7;
  uv_tcp_t* VAR_8;

  FUNC_1(VAR_5 == (uv_stream_t*) &VAR_4);


  if (VAR_1 == FUNC_0(VAR_3))
    return;


  VAR_8 = &VAR_3[VAR_1++];
  FUNC_1(0 == FUNC_4(VAR_5->loop, VAR_8));
  FUNC_1(0 == FUNC_2(VAR_5, (uv_stream_t*) VAR_8));

  if (VAR_1 != FUNC_0(VAR_3))
    return;


  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
    VAR_8 = &VAR_3[VAR_7];
    FUNC_1(0 == FUNC_3((uv_stream_t*) VAR_8, VAR_0, VAR_2));
  }
}
