
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ws_t ;
typedef int ws_state ;
typedef TYPE_2__* ws_private_t ;
struct TYPE_6__ {int frame_length; scalar_t__ needed_length; } ;
struct TYPE_5__ {TYPE_2__* private_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

ws_state FUNC_1(ws_t VAR_2) {
  ws_private_t VAR_3 = VAR_2->private_state;

  if (FUNC_0(VAR_2)) {
    return VAR_0;
  }
  if (VAR_3->needed_length || !VAR_3->frame_length) {
    return -1;
  }
  return VAR_1;
}
