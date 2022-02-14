
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_udp_t ;
typedef int uv_stream_t ;
struct TYPE_5__ {int flags; int type; int (* close_cb ) (TYPE_1__*) ;int handle_queue; } ;
typedef TYPE_1__ uv_handle_t ;


 int FUNC_0 (int *) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(uv_handle_t* VAR_2) {
  FUNC_1(VAR_2->flags & VAR_1);
  FUNC_1(!(VAR_2->flags & VAR_0));
  VAR_2->flags |= VAR_0;

  switch (VAR_2->type) {
    case 134:
    case 140:
    case 137:
    case 141:
    case 130:
    case 133:
    case 139:
    case 138:
    case 135:
    case 132:
      break;

    case 136:
    case 131:
    case 129:
      FUNC_4((uv_stream_t*)VAR_2);
      break;

    case 128:
      FUNC_5((uv_udp_t*)VAR_2);
      break;

    default:
      FUNC_1(0);
      break;
  }

  FUNC_3(VAR_2);
  FUNC_0(&VAR_2->handle_queue);

  if (VAR_2->close_cb) {
    VAR_2->close_cb(VAR_2);
  }
}
