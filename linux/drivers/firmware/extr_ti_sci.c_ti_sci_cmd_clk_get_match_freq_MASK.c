
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_resp_query_clock_freq {void* freq_hz; } ;
struct ti_sci_msg_req_query_clock_freq {int dev_id; int clk_id; int clk_id_32; void* max_freq_hz; void* target_freq_hz; void* min_freq_hz; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {scalar_t__ xfer_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer const*) ;
 int FUNC_1 (struct ti_sci_xfer const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_3 (struct ti_sci_xfer const*) ;
 int FUNC_4 (struct ti_sci_info*,struct ti_sci_xfer const*) ;
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,int ,int ,int,int) ;
 int FUNC_6 (struct ti_sci_msg_resp_query_clock_freq*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_4,
      u32 VAR_5, u32 VAR_6, u64 VAR_7,
      u64 VAR_8, u64 VAR_9,
      u64 *VAR_10)
{
 struct ti_sci_info *VAR_11;
 struct ti_sci_msg_req_query_clock_freq *VAR_12;
 struct ti_sci_msg_resp_query_clock_freq *VAR_13;
 struct ti_sci_xfer *VAR_14;
 struct device *VAR_15;
 int VAR_16 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (!VAR_4 || !VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_4);
 VAR_15 = VAR_11->dev;

 VAR_14 = FUNC_5(VAR_11, VAR_3,
       VAR_2,
       sizeof(*VAR_12), sizeof(*VAR_13));
 if (FUNC_0(VAR_14)) {
  VAR_16 = FUNC_1(VAR_14);
  FUNC_2(VAR_15, "Message alloc failed(%d)\n", VAR_16);
  return VAR_16;
 }
 VAR_12 = (struct ti_sci_msg_req_query_clock_freq *)VAR_14->xfer_buf;
 VAR_12->dev_id = VAR_5;
 if (VAR_6 < 255) {
  VAR_12->clk_id = VAR_6;
 } else {
  VAR_12->clk_id = 255;
  VAR_12->clk_id_32 = VAR_6;
 }
 VAR_12->min_freq_hz = VAR_7;
 VAR_12->target_freq_hz = VAR_8;
 VAR_12->max_freq_hz = VAR_9;

 VAR_16 = FUNC_4(VAR_11, VAR_14);
 if (VAR_16) {
  FUNC_2(VAR_15, "Mbox send fail %d\n", VAR_16);
  goto fail;
 }

 VAR_13 = (struct ti_sci_msg_resp_query_clock_freq *)VAR_14->xfer_buf;

 if (!FUNC_6(VAR_13))
  VAR_16 = -VAR_1;
 else
  *VAR_10 = VAR_13->freq_hz;

fail:
 FUNC_7(&VAR_11->minfo, VAR_14);

 return VAR_16;
}
