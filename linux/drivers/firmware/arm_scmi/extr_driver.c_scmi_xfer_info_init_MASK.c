
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scmi_xfers_info {int xfer_lock; struct scmi_xfer* xfer_block; void* xfer_alloc_table; } ;
struct TYPE_4__ {void* buf; } ;
struct TYPE_3__ {void* buf; } ;
struct scmi_xfer {int done; TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_info {struct scmi_xfers_info tx_minfo; struct scmi_desc* desc; struct device* dev; } ;
struct scmi_desc {int max_msg; int max_msg_size; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 void* FUNC_3 (struct device*,int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct scmi_info *VAR_4)
{
 int VAR_5;
 struct scmi_xfer *VAR_6;
 struct device *VAR_7 = VAR_4->dev;
 const struct scmi_desc *VAR_8 = VAR_4->desc;
 struct scmi_xfers_info *VAR_9 = &VAR_4->tx_minfo;


 if (FUNC_1(VAR_8->max_msg >= VAR_3)) {
  FUNC_2(VAR_7, "Maximum message of %d exceeds supported %ld\n",
   VAR_8->max_msg, VAR_3);
  return -VAR_0;
 }

 VAR_9->xfer_block = FUNC_3(VAR_7, VAR_8->max_msg,
     sizeof(*VAR_9->xfer_block), VAR_2);
 if (!VAR_9->xfer_block)
  return -VAR_1;

 VAR_9->xfer_alloc_table = FUNC_3(VAR_7, FUNC_0(VAR_8->max_msg),
           sizeof(long), VAR_2);
 if (!VAR_9->xfer_alloc_table)
  return -VAR_1;


 for (VAR_5 = 0, VAR_6 = VAR_9->xfer_block; VAR_5 < VAR_8->max_msg; VAR_5++, VAR_6++) {
  VAR_6->rx.buf = FUNC_3(VAR_7, sizeof(u8), VAR_8->max_msg_size,
         VAR_2);
  if (!VAR_6->rx.buf)
   return -VAR_1;

  VAR_6->tx.buf = VAR_6->rx.buf;
  FUNC_4(&VAR_6->done);
 }

 FUNC_5(&VAR_9->xfer_lock);

 return 0;
}
