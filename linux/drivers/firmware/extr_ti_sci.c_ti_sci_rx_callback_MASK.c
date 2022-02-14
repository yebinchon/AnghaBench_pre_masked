
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ti_sci_xfers_info {struct ti_sci_xfer* xfer_block; int xfer_alloc_table; } ;
struct ti_sci_xfer {scalar_t__ rx_len; int done; int xfer_buf; } ;
struct ti_sci_msg_hdr {size_t seq; } ;
struct ti_sci_info {TYPE_1__* desc; struct ti_sci_xfers_info minfo; struct device* dev; } ;
struct ti_msgmgr_message {scalar_t__ len; scalar_t__ buf; } ;
struct mbox_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_msg_size; } ;


 struct ti_sci_info* FUNC_0 (struct mbox_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,scalar_t__,...) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (size_t,int ) ;
 int FUNC_5 (struct device*,struct ti_sci_msg_hdr*) ;

__attribute__((used)) static void FUNC_6(struct mbox_client *VAR_0, void *VAR_1)
{
 struct ti_sci_info *VAR_2 = FUNC_0(VAR_0);
 struct device *VAR_3 = VAR_2->dev;
 struct ti_sci_xfers_info *VAR_4 = &VAR_2->minfo;
 struct ti_msgmgr_message *VAR_5 = VAR_1;
 struct ti_sci_msg_hdr *VAR_6 = (struct ti_sci_msg_hdr *)VAR_5->buf;
 struct ti_sci_xfer *VAR_7;
 u8 VAR_8;

 VAR_8 = VAR_6->seq;





 if (!FUNC_4(VAR_8, VAR_4->xfer_alloc_table)) {
  FUNC_2(VAR_3, "Message for %d is not expected!\n", VAR_8);
  return;
 }

 VAR_7 = &VAR_4->xfer_block[VAR_8];


 if (VAR_5->len > VAR_2->desc->max_msg_size) {
  FUNC_2(VAR_3, "Unable to handle %zu xfer(max %d)\n",
   VAR_5->len, VAR_2->desc->max_msg_size);
  FUNC_5(VAR_3, VAR_6);
  return;
 }
 if (VAR_5->len < VAR_7->rx_len) {
  FUNC_2(VAR_3, "Recv xfer %zu < expected %d length\n",
   VAR_5->len, VAR_7->rx_len);
  FUNC_5(VAR_3, VAR_6);
  return;
 }

 FUNC_5(VAR_3, VAR_6);

 FUNC_3(VAR_7->xfer_buf, VAR_5->buf, VAR_7->rx_len);
 FUNC_1(&VAR_7->done);
}
