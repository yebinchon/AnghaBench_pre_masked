
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int out_packet_num; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4 (void *VAR_4, int VAR_5, struct connection *VAR_6, int VAR_7) {
  if (VAR_3 >= 4) {
    FUNC_2 (VAR_2, "creating query... len = %d, op = %x\n", VAR_5, VAR_7);
  }
  FUNC_1 (VAR_5 <= VAR_0 && VAR_5 >= 16);
  if (!VAR_6 || FUNC_3 (VAR_6) != VAR_1) {
    if (VAR_3 >= 4) {
      FUNC_2 (VAR_2, "not_created: connection_failedn\n");
    }
    return -1;
  }
  int *VAR_8 = VAR_4;
  VAR_8[0] = VAR_5;
  VAR_8[1] = FUNC_0(VAR_6)->out_packet_num ++;
  VAR_8[2] = VAR_7;
  return 0;
}
