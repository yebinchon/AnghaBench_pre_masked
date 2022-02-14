
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int * buf; } ;
struct TYPE_3__ {int * buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_handle {struct device* dev; } ;
struct device {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_5 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_6(const struct scmi_handle *VAR_3,
          u8 *VAR_4)
{
 u8 *VAR_5;
 int VAR_6, VAR_7;
 struct scmi_xfer *VAR_8;
 __le32 *VAR_9, *VAR_10;
 u32 VAR_11 = 0, VAR_12;
 struct device *VAR_13 = VAR_3->dev;

 VAR_6 = FUNC_4(VAR_3, VAR_0,
     VAR_2, sizeof(*VAR_9), 0, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_9 = VAR_8->tx.buf;
 VAR_10 = VAR_8->rx.buf;
 VAR_5 = VAR_8->rx.buf + sizeof(*VAR_10);

 do {

  *VAR_9 = FUNC_0(VAR_11);

  VAR_6 = FUNC_3(VAR_3, VAR_8);
  if (VAR_6)
   break;

  VAR_12 = FUNC_2(*VAR_10);
  if (VAR_11 + VAR_12 > VAR_1) {
   FUNC_1(VAR_13, "No. of Protocol > MAX_PROTOCOLS_IMP");
   break;
  }

  for (VAR_7 = 0; VAR_7 < VAR_12; VAR_7++)
   VAR_4[VAR_11 + VAR_7] = *(VAR_5 + VAR_7);

  VAR_11 += VAR_12;
 } while (VAR_12);

 FUNC_5(VAR_3, VAR_8);

 return VAR_6;
}
