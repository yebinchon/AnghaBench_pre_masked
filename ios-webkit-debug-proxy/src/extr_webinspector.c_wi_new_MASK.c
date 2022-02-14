
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* wi_t ;
struct wi_struct {int dummy; } ;
struct TYPE_7__ {int partials_supported; } ;
struct TYPE_6__ {TYPE_2__* private_state; int on_error; int recv_packet; int send_plist; int on_recv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;

wi_t FUNC_4(bool VAR_4) {
  wi_t VAR_5 = (wi_t)FUNC_0(sizeof(struct wi_struct));
  if (!VAR_5) {
    return ((void*)0);
  }
  FUNC_1(VAR_5, 0, sizeof(struct wi_struct));
  VAR_5->on_recv = VAR_1;
  VAR_5->send_plist = VAR_3;
  VAR_5->recv_packet = VAR_2;
  VAR_5->on_error = VAR_0;
  VAR_5->private_state = FUNC_3();
  if (!VAR_5->private_state) {
    FUNC_2(VAR_5);
    return ((void*)0);
  }
  VAR_5->private_state->partials_supported = VAR_4;
  return VAR_5;
}
