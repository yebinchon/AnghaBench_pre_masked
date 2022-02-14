
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ti_sci_xfers_info {struct ti_sci_xfer* xfer_block; int xfer_lock; int xfer_alloc_table; int sem_xfer_count; } ;
struct TYPE_4__ {size_t len; scalar_t__ buf; } ;
struct ti_sci_xfer {size_t rx_len; int done; TYPE_2__ tx_message; } ;
struct ti_sci_msg_hdr {size_t seq; int flags; int host; int type; } ;
struct ti_sci_info {int host_id; TYPE_1__* desc; struct ti_sci_xfers_info minfo; } ;
struct TYPE_3__ {size_t max_msg_size; int max_msgs; int max_rx_timeout_ms; } ;


 int VAR_0 ;
 struct ti_sci_xfer* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 unsigned long FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static struct ti_sci_xfer *FUNC_8(struct ti_sci_info *VAR_1,
            u16 VAR_2, u32 VAR_3,
            size_t VAR_4,
            size_t VAR_5)
{
 struct ti_sci_xfers_info *VAR_6 = &VAR_1->minfo;
 struct ti_sci_xfer *VAR_7;
 struct ti_sci_msg_hdr *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 u8 VAR_11;
 int VAR_12;
 int VAR_13;


 if (VAR_5 > VAR_1->desc->max_msg_size ||
     VAR_4 > VAR_1->desc->max_msg_size ||
     VAR_5 < sizeof(*VAR_8) || VAR_4 < sizeof(*VAR_8))
  return FUNC_0(-VAR_0);






 VAR_13 = FUNC_3(VAR_1->desc->max_rx_timeout_ms) * 5;
 VAR_12 = FUNC_1(&VAR_6->sem_xfer_count, VAR_13);
 if (VAR_12 < 0)
  return FUNC_0(VAR_12);


 FUNC_6(&VAR_6->xfer_lock, VAR_9);
 VAR_10 = FUNC_2(VAR_6->xfer_alloc_table,
          VAR_1->desc->max_msgs);
 FUNC_5(VAR_10, VAR_6->xfer_alloc_table);
 FUNC_7(&VAR_6->xfer_lock, VAR_9);
 VAR_11 = (u8)VAR_10;

 VAR_7 = &VAR_6->xfer_block[VAR_11];

 VAR_8 = (struct ti_sci_msg_hdr *)VAR_7->tx_message.buf;
 VAR_7->tx_message.len = VAR_4;
 VAR_7->rx_len = (u8)VAR_5;

 FUNC_4(&VAR_7->done);

 VAR_8->seq = VAR_11;
 VAR_8->type = VAR_2;
 VAR_8->host = VAR_1->host_id;
 VAR_8->flags = VAR_3;

 return VAR_7;
}
