
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_status ;
typedef TYPE_3__* iwdp_t ;
typedef TYPE_4__* iwdp_iws_t ;
struct TYPE_11__ {int ws_fd; TYPE_1__* iport; } ;
struct TYPE_10__ {scalar_t__ (* send ) (TYPE_3__*,int ,char const*,size_t) ;} ;
struct TYPE_9__ {int (* on_error ) (TYPE_2__*,char*,size_t) ;int state; } ;
struct TYPE_8__ {TYPE_3__* self; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,char const*,size_t) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;

ws_status FUNC_2(ws_t VAR_1, const char *VAR_2, size_t VAR_3) {
  iwdp_iws_t VAR_4 = (iwdp_iws_t)VAR_1->state;
  iwdp_t VAR_5 = VAR_4->iport->self;
  return (VAR_5->send(VAR_5, VAR_4->ws_fd, VAR_2, VAR_3) ?
      VAR_1->on_error(VAR_1, "Unable to send %zd bytes of data", VAR_3) :
      VAR_0);
}
