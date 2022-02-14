
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_state ;
typedef TYPE_3__* ws_private_t ;
struct TYPE_8__ {TYPE_1__* in; } ;
struct TYPE_7__ {TYPE_3__* private_state; } ;
struct TYPE_6__ {char* in_head; char const* in_tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

ws_state FUNC_2(ws_t VAR_2) {
  ws_private_t VAR_3 = VAR_2->private_state;
  const char *VAR_4 = VAR_3->in->in_head;
  size_t VAR_5 = VAR_3->in->in_tail - VAR_4;

  if (!FUNC_0(VAR_4, "\r\n", VAR_5)) {

    return -1;
  }

  if (FUNC_1(VAR_2)) {
    return VAR_0;
  }

  return VAR_1;
}
