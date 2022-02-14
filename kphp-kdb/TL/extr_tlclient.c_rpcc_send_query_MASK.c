
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; } ;
struct TYPE_4__ {int out_packet_num; } ;
struct TYPE_3__ {int (* flush_packet ) (struct connection*) ;} ;


 int* VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct connection*) ;
 int VAR_9 ;
 int FUNC_7 (int *,int*,int) ;

int FUNC_8 (struct connection *VAR_10, int VAR_11) {
  VAR_6++;
  VAR_0[0] = 4 * (VAR_11 + 6 + VAR_2);
  VAR_0[1] = FUNC_0(VAR_10)->out_packet_num++;
  VAR_0[2] = VAR_1;
  FUNC_5 (&VAR_0[3], &VAR_6, 8);
  if (VAR_2 > 0) {
    FUNC_5 (&VAR_0[5], &VAR_3, 8);
    FUNC_5 (&VAR_0[7], &VAR_7, 8);
    VAR_5++;
    FUNC_5 (&VAR_0[9], &VAR_5, 8);
  }
  VAR_0[(VAR_0[0]/4)-1] = FUNC_2 (VAR_0, VAR_0[0] - 4);
  FUNC_7 (&VAR_10->Out, VAR_0, VAR_0[0]);
  FUNC_1(VAR_10)->flush_packet(VAR_10);
  if (VAR_9 >= 4) {
    FUNC_4 (VAR_8, "Sending:\n");
    FUNC_3 (VAR_0);
  }
  VAR_4 = 0;
  return 0;
}
