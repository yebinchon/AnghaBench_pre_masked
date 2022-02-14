
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_4, int VAR_5) {
  FUNC_0(VAR_5 == 0);

  FUNC_0(0 == FUNC_3(VAR_4->loop, &VAR_1));
  FUNC_0(0 == FUNC_1(VAR_4, (uv_stream_t*) &VAR_1));

  FUNC_0(0 == FUNC_4(FUNC_2(), &VAR_2));
  FUNC_0(0 == FUNC_5(&VAR_2, VAR_3, 1000, 0));

  VAR_0++;
}
