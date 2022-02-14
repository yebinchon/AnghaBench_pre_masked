
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ti_sci_xfers_info {int sem_xfer_count; int xfer_lock; int xfer_alloc_table; } ;
struct TYPE_2__ {scalar_t__ buf; } ;
struct ti_sci_xfer {TYPE_1__ tx_message; } ;
struct ti_sci_msg_hdr {int seq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ti_sci_xfers_info *VAR_0,
    struct ti_sci_xfer *VAR_1)
{
 unsigned long VAR_2;
 struct ti_sci_msg_hdr *VAR_3;
 u8 VAR_4;

 VAR_3 = (struct ti_sci_msg_hdr *)VAR_1->tx_message.buf;
 VAR_4 = VAR_3->seq;






 FUNC_1(&VAR_0->xfer_lock, VAR_2);
 FUNC_0(VAR_4, VAR_0->xfer_alloc_table);
 FUNC_2(&VAR_0->xfer_lock, VAR_2);


 FUNC_3(&VAR_0->sem_xfer_count);
}
