
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_stream_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(uv_stream_t* VAR_7) {
  size_t VAR_8;
  int VAR_9;

  VAR_5 = 0;
  VAR_4 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    FUNC_1(VAR_7);
  }

  VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_6);
  FUNC_0(VAR_9 == 0);

  VAR_9 = FUNC_3(VAR_7->loop, VAR_1);
  FUNC_0(VAR_9 == 0);

  FUNC_0(VAR_5 == VAR_2);
  FUNC_0(VAR_4 == VAR_2);
}
