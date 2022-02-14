
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scmi_xfers_info {int xfer_lock; int xfer_alloc_table; } ;
struct TYPE_2__ {int seq; } ;
struct scmi_xfer {TYPE_1__ hdr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct scmi_xfers_info *VAR_0, struct scmi_xfer *VAR_1)
{
 unsigned long VAR_2;






 FUNC_1(&VAR_0->xfer_lock, VAR_2);
 FUNC_0(VAR_1->hdr.seq, VAR_0->xfer_alloc_table);
 FUNC_2(&VAR_0->xfer_lock, VAR_2);
}
