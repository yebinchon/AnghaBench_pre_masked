
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_4, int VAR_5) {
  FUNC_0(VAR_5 == 0);

  FUNC_0(0 == FUNC_3(VAR_4->loop, &VAR_3));
  FUNC_0(0 == FUNC_1(VAR_4, (uv_stream_t*) &VAR_3));
  FUNC_0(0 == FUNC_2((uv_stream_t*) &VAR_3,
                            VAR_0,
                            VAR_1));

  VAR_2++;
}
