
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_handle {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

int FUNC_4(const struct scmi_handle *VAR_1, u8 VAR_2,
       u32 *VAR_3)
{
 int VAR_4;
 __le32 *VAR_5;
 struct scmi_xfer *VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2, 0,
     sizeof(*VAR_3), &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_4) {
  VAR_5 = VAR_6->rx.buf;
  *VAR_3 = FUNC_0(*VAR_5);
 }

 FUNC_3(VAR_1, VAR_6);
 return VAR_4;
}
