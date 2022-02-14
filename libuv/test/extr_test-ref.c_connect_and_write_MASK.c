
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
typedef TYPE_1__ uv_connect_t ;
typedef int uv_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(uv_connect_t* VAR_5, int VAR_6) {
  uv_buf_t VAR_7 = FUNC_1(VAR_0, sizeof VAR_0);
  FUNC_0(VAR_5 == &VAR_2);
  FUNC_0(VAR_6 == 0);
  FUNC_2(&VAR_4, VAR_5->handle, &VAR_7, 1, VAR_3);
  VAR_1++;
}
