
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_handle_t ;
typedef int uv_close_cb ;
struct linger {int member_0; int member_1; } ;
typedef int l ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int ,struct linger*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(uv_tcp_t* VAR_5, uv_close_cb VAR_6) {
  int VAR_7;
  struct linger VAR_8 = { 1, 0 };


  if (VAR_5->flags & VAR_3)
    return VAR_2;

  VAR_7 = FUNC_2(VAR_5);
  if (0 != FUNC_1(VAR_7, VAR_0, VAR_1, &VAR_8, sizeof(VAR_8)))
    return FUNC_0(VAR_4);

  FUNC_3((uv_handle_t*) VAR_5, VAR_6);
  return 0;
}
