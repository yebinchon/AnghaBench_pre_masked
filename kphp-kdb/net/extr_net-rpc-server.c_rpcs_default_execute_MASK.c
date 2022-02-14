
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; int fd; int In; int last_response_time; } ;
struct TYPE_4__ {int out_packet_num; } ;
struct TYPE_3__ {int (* flush_packet ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (int,char*,int ,long long,...) ;
 int FUNC_7 (int *,int*,int) ;

int FUNC_8 (struct connection *VAR_4, int VAR_5, int VAR_6) {
  FUNC_6 (1, "rpcs_execute: fd=%d, op=%d, len=%d\n", VAR_4->fd, VAR_5, VAR_6);
  if (VAR_5 == VAR_0 && VAR_6 == 24) {
    VAR_4->last_response_time = VAR_3;
    static int VAR_7[12];
    FUNC_2 (FUNC_4 (&VAR_4->In, VAR_7, 24) == 24);
    static int VAR_8[12];
    VAR_8[0] = 24;
    VAR_8[1] = FUNC_0(VAR_4)->out_packet_num++;
    VAR_8[2] = VAR_1;
    VAR_8[3] = VAR_7[3];
    VAR_8[4] = VAR_7[4];
    VAR_8[5] = FUNC_3 (VAR_8, 20);
    FUNC_6 (1, "Received ping from fd=%d. ping_id = %lld. Sending pong\n", VAR_4->fd, *(long long *)(VAR_7 + 3));
    FUNC_7 (&VAR_4->Out, VAR_8, 24);
    FUNC_1(VAR_4)->flush_packet(VAR_4);
    return 24;
  }
  return VAR_2;

}
