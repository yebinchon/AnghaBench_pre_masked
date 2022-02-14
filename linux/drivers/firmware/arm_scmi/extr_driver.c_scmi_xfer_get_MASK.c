
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scmi_xfers_info {struct scmi_xfer* xfer_block; int xfer_lock; int xfer_alloc_table; } ;
struct TYPE_4__ {size_t seq; } ;
struct scmi_xfer {int done; TYPE_2__ hdr; } ;
struct scmi_info {TYPE_1__* desc; } ;
struct scmi_handle {int dummy; } ;
struct TYPE_3__ {unsigned long max_msg; } ;


 int VAR_0 ;
 struct scmi_xfer* FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 struct scmi_info* FUNC_2 (struct scmi_handle const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static struct scmi_xfer *FUNC_7(const struct scmi_handle *VAR_1,
           struct scmi_xfers_info *VAR_2)
{
 u16 VAR_3;
 struct scmi_xfer *VAR_4;
 unsigned long VAR_5, VAR_6;
 struct scmi_info *VAR_7 = FUNC_2(VAR_1);


 FUNC_5(&VAR_2->xfer_lock, VAR_5);
 VAR_6 = FUNC_1(VAR_2->xfer_alloc_table,
          VAR_7->desc->max_msg);
 if (VAR_6 == VAR_7->desc->max_msg) {
  FUNC_6(&VAR_2->xfer_lock, VAR_5);
  return FUNC_0(-VAR_0);
 }
 FUNC_4(VAR_6, VAR_2->xfer_alloc_table);
 FUNC_6(&VAR_2->xfer_lock, VAR_5);

 VAR_3 = VAR_6;

 VAR_4 = &VAR_2->xfer_block[VAR_3];
 VAR_4->hdr.seq = VAR_3;
 FUNC_3(&VAR_4->done);

 return VAR_4;
}
