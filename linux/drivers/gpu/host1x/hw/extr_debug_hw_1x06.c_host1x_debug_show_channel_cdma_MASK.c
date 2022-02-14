
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct output {int dummy; } ;
struct TYPE_2__ {int mapped; } ;
struct host1x_cdma {TYPE_1__ push_buffer; } ;
struct host1x_channel {struct host1x_cdma cdma; int dev; int id; } ;
struct host1x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct host1x_channel*,int ) ;
 int FUNC_2 (struct output*,char*,...) ;
 int FUNC_3 (struct output*,struct host1x_cdma*) ;

__attribute__((used)) static void FUNC_4(struct host1x *VAR_9,
        struct host1x_channel *VAR_10,
        struct output *VAR_11)
{
 struct host1x_cdma *VAR_12 = &VAR_10->cdma;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18;

 VAR_13 = FUNC_1(VAR_10, VAR_6);
 VAR_14 = FUNC_1(VAR_10, VAR_5);
 VAR_15 = FUNC_1(VAR_10, VAR_3);
 VAR_16 = FUNC_1(VAR_10, VAR_2);
 VAR_17 = FUNC_1(VAR_10, VAR_1);
 VAR_18 = FUNC_1(VAR_10, VAR_0);

 FUNC_2(VAR_11, "%u-%s: ", VAR_10->id, FUNC_0(VAR_10->dev));

 if (VAR_15 & VAR_4 ||
     !VAR_10->cdma.push_buffer.mapped) {
  FUNC_2(VAR_11, "inactive\n\n");
  return;
 }

 if (VAR_17 == VAR_7 && VAR_16 == VAR_8)
  FUNC_2(VAR_11, "waiting on syncpt\n");
 else
  FUNC_2(VAR_11, "active class %02x, offset %04x\n",
        VAR_17, VAR_16);

 FUNC_2(VAR_11, "DMAPUT %08x, DMAGET %08x, DMACTL %08x\n",
       VAR_13, VAR_14, VAR_15);
 FUNC_2(VAR_11, "CHANNELSTAT %02x\n", VAR_18);

 FUNC_3(VAR_11, VAR_12);
 FUNC_2(VAR_11, "\n");
}
