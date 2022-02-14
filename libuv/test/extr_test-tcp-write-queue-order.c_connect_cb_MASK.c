
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int uv_buf_t ;
typedef int base ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int *,int,int ) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(uv_connect_t* VAR_4, int VAR_5) {
  static char VAR_6[1024];
  int VAR_7;
  int VAR_8;
  uv_buf_t VAR_9;

  FUNC_0(VAR_5 == 0);
  VAR_1++;

  VAR_9 = FUNC_1(VAR_6, sizeof(VAR_6));

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    VAR_7 = FUNC_2(&VAR_3[VAR_8],
                 VAR_4->handle,
                 &VAR_9,
                 1,
                 VAR_2);
    FUNC_0(VAR_7 == 0);
  }
}
