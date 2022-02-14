
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_state ;
typedef TYPE_3__* ws_private_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_11__ {scalar_t__ begin; scalar_t__ tail; } ;
struct TYPE_10__ {scalar_t__ frame_length; scalar_t__ continued_opcode; TYPE_7__* data; TYPE_1__* in; scalar_t__ needed_length; } ;
struct TYPE_9__ {scalar_t__ (* on_frame ) (TYPE_2__*,int,scalar_t__,int,scalar_t__,scalar_t__,int*) ;TYPE_3__* private_state; } ;
struct TYPE_8__ {scalar_t__ in_tail; scalar_t__ in_head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,scalar_t__,int,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*,scalar_t__*,int*) ;

ws_state FUNC_3(ws_t VAR_5) {
  ws_private_t VAR_6 = VAR_5->private_state;

  if (VAR_6->needed_length || !VAR_6->frame_length ||
      VAR_6->in->in_tail - VAR_6->in->in_head < VAR_6->frame_length) {
    return -1;
  }

  bool VAR_7;
  uint8_t VAR_8;
  bool VAR_9;
  if (FUNC_2(VAR_5, &VAR_7, &VAR_8, &VAR_9)) {
    return VAR_3;
  }

  bool VAR_10 = 1;
  if (VAR_5->on_frame(VAR_5, VAR_7, VAR_8, VAR_9,
        VAR_6->data->begin, VAR_6->data->tail - VAR_6->data->begin,
        &VAR_10)) {
    return VAR_3;
  }
  if (VAR_7 || !VAR_10) {
    FUNC_0(VAR_6->data);
  }

  if (VAR_7) {
    VAR_6->continued_opcode = 0;
  } else if (VAR_8 != VAR_1) {
    VAR_6->continued_opcode = VAR_8;
  }

  if (VAR_8 == VAR_0) {
    return VAR_2;
  }
  return VAR_4;
}
