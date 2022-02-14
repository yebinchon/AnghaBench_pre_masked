
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {int buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_handle {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_5(const struct scmi_handle *VAR_2, u32 VAR_3, u64 *VAR_4)
{
 int VAR_5;
 struct scmi_xfer *VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_0, VAR_1,
     sizeof(__le32), sizeof(u64), &VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, VAR_6->tx.buf);

 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (!VAR_5)
  *VAR_4 = FUNC_0(VAR_6->rx.buf);

 FUNC_4(VAR_2, VAR_6);
 return VAR_5;
}
