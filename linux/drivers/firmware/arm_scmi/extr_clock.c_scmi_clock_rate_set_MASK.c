
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct scmi_clock_set_rate* buf; } ;
struct scmi_xfer {TYPE_1__ tx; } ;
struct scmi_handle {struct clock_info* clk_priv; } ;
struct scmi_clock_set_rate {void* value_high; void* value_low; void* id; void* flags; } ;
struct clock_info {scalar_t__ max_async_req; int cur_async_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_5 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_6 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_7(const struct scmi_handle *VAR_3, u32 VAR_4,
          u64 VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;
 struct scmi_xfer *VAR_8;
 struct scmi_clock_set_rate *VAR_9;
 struct clock_info *VAR_10 = VAR_3->clk_priv;

 VAR_6 = FUNC_5(VAR_3, VAR_0, VAR_2,
     sizeof(*VAR_9), 0, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_10->max_async_req &&
     FUNC_1(&VAR_10->cur_async_req) < VAR_10->max_async_req)
  VAR_7 |= VAR_1;

 VAR_9 = VAR_8->tx.buf;
 VAR_9->flags = FUNC_2(VAR_7);
 VAR_9->id = FUNC_2(VAR_4);
 VAR_9->value_low = FUNC_2(VAR_5 & 0xffffffff);
 VAR_9->value_high = FUNC_2(VAR_5 >> 32);

 if (VAR_7 & VAR_1)
  VAR_6 = FUNC_4(VAR_3, VAR_8);
 else
  VAR_6 = FUNC_3(VAR_3, VAR_8);

 if (VAR_10->max_async_req)
  FUNC_0(&VAR_10->cur_async_req);

 FUNC_6(VAR_3, VAR_8);
 return VAR_6;
}
