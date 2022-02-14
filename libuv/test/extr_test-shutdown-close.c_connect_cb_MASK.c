
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_connect_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(uv_connect_t* VAR_5, int VAR_6) {
  int VAR_7;

  FUNC_0(VAR_5 == &VAR_2);
  FUNC_0(VAR_6 == 0);

  VAR_7 = FUNC_3(&VAR_4, VAR_5->handle, VAR_3);
  FUNC_0(VAR_7 == 0);
  FUNC_0(0 == FUNC_2((uv_handle_t*) VAR_5->handle));
  FUNC_1((uv_handle_t*) VAR_5->handle, VAR_0);
  FUNC_0(1 == FUNC_2((uv_handle_t*) VAR_5->handle));

  VAR_1++;
}
