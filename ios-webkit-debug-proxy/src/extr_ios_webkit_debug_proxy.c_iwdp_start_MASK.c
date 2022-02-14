
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* iwdp_t ;
typedef int iwdp_status ;
typedef TYPE_2__* iwdp_private_t ;
typedef TYPE_3__* iwdp_idl_t ;
typedef TYPE_4__* dl_t ;
struct TYPE_20__ {int (* on_attach ) (TYPE_4__*,char*,int) ;scalar_t__ (* start ) (TYPE_4__*) ;} ;
struct TYPE_19__ {int dl_fd; TYPE_4__* dl; TYPE_1__* self; } ;
struct TYPE_18__ {scalar_t__ idl; } ;
struct TYPE_17__ {int (* subscribe ) (TYPE_1__*) ;int (* on_error ) (TYPE_1__*,char*) ;scalar_t__ (* add_fd ) (TYPE_1__*,int,int *,TYPE_3__*,int) ;TYPE_2__* private_state; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int *,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_4__*,char*,int) ;

iwdp_status FUNC_10(iwdp_t VAR_1) {
  iwdp_private_t VAR_2 = VAR_1->private_state;
  if (VAR_2->idl) {
    return VAR_1->on_error(VAR_1, "Already started?");
  }

  if (FUNC_1(VAR_1, ((void*)0))) {

  }

  iwdp_idl_t VAR_3 = FUNC_0();
  VAR_3->self = VAR_1;

  int VAR_4 = VAR_1->subscribe(VAR_1);
  if (VAR_4 < 0) {
    return VAR_1->on_error(VAR_1, "No device found, is it plugged in?");
  }
  VAR_3->dl_fd = VAR_4;

  if (VAR_1->add_fd(VAR_1, VAR_4, ((void*)0), VAR_3, 0)) {
    return VAR_1->on_error(VAR_1, "add_fd failed");
  }

  dl_t VAR_5 = VAR_3->dl;
  if (VAR_5->start(VAR_5)) {
    return VAR_1->on_error(VAR_1, "Unable to start device_listener");
  }



  VAR_5->on_attach(VAR_5, "SIMULATOR", -1);

  return VAR_0;
}
