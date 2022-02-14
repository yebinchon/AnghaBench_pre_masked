
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef TYPE_2__* ws_t ;
typedef TYPE_3__* wi_t ;
typedef int ssize_t ;
typedef TYPE_4__* iwdp_type_t ;
typedef TYPE_5__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_6__* iwdp_iws_t ;
typedef TYPE_7__* iwdp_iwi_t ;
typedef TYPE_8__* iwdp_ifs_t ;
typedef TYPE_9__* iwdp_idl_t ;
typedef TYPE_10__* dl_t ;
struct TYPE_27__ {TYPE_10__* dl; } ;
struct TYPE_26__ {TYPE_1__* iws; } ;
struct TYPE_25__ {TYPE_3__* wi; } ;
struct TYPE_24__ {TYPE_2__* ws; } ;
struct TYPE_23__ {int (* on_error ) (TYPE_5__*,char*,int) ;int (* remove_fd ) (TYPE_5__*,int) ;int (* send ) (TYPE_5__*,int,char const*,int ) ;} ;
struct TYPE_22__ {int type; } ;
struct TYPE_21__ {int (* on_recv ) (TYPE_3__*,char const*,int ) ;} ;
struct TYPE_20__ {int (* on_recv ) (TYPE_2__*,char const*,int ) ;} ;
struct TYPE_19__ {int ws_fd; } ;
struct TYPE_18__ {int (* on_recv ) (TYPE_10__*,char const*,int ) ;} ;






 int FUNC_0 (TYPE_10__*,char const*,int ) ;
 int FUNC_1 (TYPE_3__*,char const*,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,int ) ;
 int FUNC_3 (TYPE_5__*,int,char const*,int ) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*,char*,int) ;

iwdp_status FUNC_6(iwdp_t VAR_0, int VAR_1, void *VAR_2,
    const char *VAR_3, ssize_t VAR_4) {
  int VAR_5 = ((iwdp_type_t)VAR_2)->type;
  switch (VAR_5) {
    case 131:
      {
        dl_t VAR_6 = ((iwdp_idl_t)VAR_2)->dl;
        return VAR_6->on_recv(VAR_6, VAR_3, VAR_4);
      }
    case 129:
      {
        wi_t VAR_7 = ((iwdp_iwi_t)VAR_2)->wi;
        return VAR_7->on_recv(VAR_7, VAR_3, VAR_4);
      }
    case 128:
      {
        ws_t VAR_8 = ((iwdp_iws_t)VAR_2)->ws;
        return VAR_8->on_recv(VAR_8, VAR_3, VAR_4);
      }
    case 130:
      {
        int VAR_9 = ((iwdp_ifs_t)VAR_2)->iws->ws_fd;
        iwdp_status VAR_10 = VAR_0->send(VAR_0, VAR_9, VAR_3, VAR_4);
        if (VAR_10) {
          VAR_0->remove_fd(VAR_0, VAR_9);
        }
        return VAR_10;
      }
    default:
      return VAR_0->on_error(VAR_0, "Unexpected recv type %d", VAR_5);
  }
}
