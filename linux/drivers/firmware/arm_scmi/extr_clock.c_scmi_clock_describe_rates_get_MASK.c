
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {struct scmi_msg_resp_clock_describe_rates* buf; } ;
struct TYPE_5__ {struct scmi_msg_clock_describe_rates* buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_msg_resp_clock_describe_rates {int * rate; int num_rates_flags; } ;
struct scmi_msg_clock_describe_rates {void* rate_index; void* id; } ;
struct scmi_handle {int dev; } ;
struct TYPE_8__ {scalar_t__ num_rates; void** rates; } ;
struct TYPE_7__ {void* step_size; void* max_rate; void* min_rate; } ;
struct scmi_clock_info {int rate_discrete; TYPE_4__ list; TYPE_3__ range; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,void*,...) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_9 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_10 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_11(const struct scmi_handle *VAR_3, u32 VAR_4,
         struct scmi_clock_info *VAR_5)
{
 u64 *VAR_6;
 int VAR_7, VAR_8;
 bool VAR_9 = 0;
 u32 VAR_10 = 0, VAR_11;
 u16 VAR_12, VAR_13;
 struct scmi_xfer *VAR_14;
 struct scmi_msg_clock_describe_rates *VAR_15;
 struct scmi_msg_resp_clock_describe_rates *VAR_16;

 VAR_7 = FUNC_9(VAR_3, VAR_0,
     VAR_2, sizeof(*VAR_15), 0, &VAR_14);
 if (VAR_7)
  return VAR_7;

 VAR_15 = VAR_14->tx.buf;
 VAR_16 = VAR_14->rx.buf;

 do {
  VAR_15->id = FUNC_4(VAR_4);

  VAR_15->rate_index = FUNC_4(VAR_10);

  VAR_7 = FUNC_8(VAR_3, VAR_14);
  if (VAR_7)
   goto err;

  VAR_11 = FUNC_7(VAR_16->num_rates_flags);
  VAR_13 = FUNC_0(VAR_11);
  VAR_9 = FUNC_2(VAR_11);
  VAR_12 = FUNC_1(VAR_11);

  if (VAR_10 + VAR_12 > VAR_1) {
   FUNC_6(VAR_3->dev, "No. of rates > MAX_NUM_RATES");
   break;
  }

  if (!VAR_9) {
   VAR_5->range.min_rate = FUNC_3(VAR_16->rate[0]);
   VAR_5->range.max_rate = FUNC_3(VAR_16->rate[1]);
   VAR_5->range.step_size = FUNC_3(VAR_16->rate[2]);
   FUNC_5(VAR_3->dev, "Min %llu Max %llu Step %llu Hz\n",
    VAR_5->range.min_rate, VAR_5->range.max_rate,
    VAR_5->range.step_size);
   break;
  }

  VAR_6 = &VAR_5->list.rates[VAR_10];
  for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++, VAR_6++) {
   *VAR_6 = FUNC_3(VAR_16->rate[VAR_8]);
   FUNC_5(VAR_3->dev, "Rate %llu Hz\n", *VAR_6);
  }

  VAR_10 += VAR_12;




 } while (VAR_12 && VAR_13);

 if (VAR_9)
  VAR_5->list.num_rates = VAR_10;

 VAR_5->rate_discrete = VAR_9;

err:
 FUNC_10(VAR_3, VAR_14);
 return VAR_7;
}
