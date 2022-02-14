
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_msg_constructor {int total_parts; TYPE_1__* msgs; } ;
struct TYPE_2__ {scalar_t__ magic; } ;


 int FUNC_0 (struct udp_msg_constructor*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (struct udp_msg_constructor *VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->total_parts; VAR_1++) {
    if (VAR_0->msgs[VAR_1].magic) {
      FUNC_1 (&VAR_0->msgs[VAR_1]);
    }
  }
  FUNC_0 (VAR_0);
}
