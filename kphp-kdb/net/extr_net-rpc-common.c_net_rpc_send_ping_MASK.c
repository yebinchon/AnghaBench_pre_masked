
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcx_data {int out_packet_num; } ;
struct connection {int flags; int Out; scalar_t__ custom_data; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*,int,int*) ;
 int FUNC_3 (int,char*,int ,long long) ;
 int FUNC_4 (int *,int*,int) ;

void FUNC_5 (struct connection *VAR_2, long long VAR_3) {
  if (!(VAR_2->flags & VAR_0)) {
    FUNC_3 (2, "Sending ping to fd=%d. ping_id = %lld\n", VAR_2->fd, VAR_3);
    static int VAR_4[20];
    VAR_4[0] = 24;
    VAR_4[1] = ((struct rpcx_data *) ((VAR_2)->custom_data))->out_packet_num++;
    VAR_4[2] = VAR_1;
    *(long long *)(VAR_4 + 3) = VAR_3;
    VAR_4[5] = FUNC_0 (VAR_4, 20);
    FUNC_4 (&VAR_2->Out, VAR_4, 24);
    FUNC_1 (VAR_2);
  } else {
    static int VAR_5[20];
    VAR_5[0] = VAR_1;
    *(long long *)(VAR_5 + 1) = VAR_3;
    FUNC_2 (VAR_2, 12, VAR_5);
    FUNC_1 (VAR_2);
  }
}
