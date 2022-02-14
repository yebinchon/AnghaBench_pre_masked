
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdp_sock {int recv_bytes; TYPE_1__* socket; int qp_active; } ;
struct TYPE_4__ {int sb_hiwat; } ;
struct TYPE_3__ {TYPE_2__ so_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int) ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct sdp_sock*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline int
FUNC_3(struct sdp_sock *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_3->qp_active || !VAR_3->socket)
  return 0;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 >= VAR_1)
  return 0;
 if (VAR_7 < VAR_0)
  return 1;

 VAR_6 = VAR_3->recv_bytes;
 VAR_5 = FUNC_0(VAR_3->socket->so_rcv.sb_hiwat,
     (1 + VAR_0) * VAR_6);
 VAR_5 *= VAR_2;



 VAR_4 = (VAR_7 - VAR_0) * VAR_6;
 VAR_4 += FUNC_2(&VAR_3->socket->so_rcv);

 return VAR_4 < VAR_5;
}
