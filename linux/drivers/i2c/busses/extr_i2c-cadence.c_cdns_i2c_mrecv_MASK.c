
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns_i2c {unsigned int recv_count; unsigned int curr_recv_count; TYPE_1__* p_msg; scalar_t__ bus_hold_flag; int p_recv_buf; } ;
struct TYPE_2__ {unsigned int len; int flags; unsigned int addr; int buf; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct cdns_i2c*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct cdns_i2c *VAR_14)
{
 unsigned int VAR_15;
 unsigned int VAR_16;

 VAR_14->p_recv_buf = VAR_14->p_msg->buf;
 VAR_14->recv_count = VAR_14->p_msg->len;


 VAR_15 = FUNC_1(VAR_4);
 VAR_15 |= VAR_5 | VAR_2;

 if (VAR_14->p_msg->flags & VAR_12)
  VAR_14->recv_count = VAR_13 + 1;

 VAR_14->curr_recv_count = VAR_14->recv_count;





 if ((VAR_14->recv_count > VAR_7) || VAR_14->bus_hold_flag)
  VAR_15 |= VAR_3;
 else
  VAR_15 = VAR_15 & ~VAR_3;

 FUNC_2(VAR_15, VAR_4);


 VAR_16 = FUNC_1(VAR_9);
 FUNC_2(VAR_16, VAR_9);







 if (VAR_14->recv_count > VAR_10) {
  FUNC_2(VAR_10,
      VAR_11);
  VAR_14->curr_recv_count = VAR_10;
 } else {
  FUNC_2(VAR_14->recv_count, VAR_11);
 }


 FUNC_2(VAR_14->p_msg->addr & VAR_0,
      VAR_1);

 if (!VAR_14->bus_hold_flag &&
  ((VAR_14->p_msg->flags & VAR_12) != VAR_12) &&
  (VAR_14->recv_count <= VAR_7))
   FUNC_0(VAR_14);
 FUNC_2(VAR_6, VAR_8);
}
