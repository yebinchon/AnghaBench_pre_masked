
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf; } ;
struct TYPE_3__ {int buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_handle {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_3,
     int VAR_4, char *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_0,
     VAR_2, sizeof(__le32),
     VAR_1, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_4, VAR_7->tx.buf);

 VAR_6 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_6)
  FUNC_4(VAR_5, VAR_7->rx.buf, VAR_1);

 FUNC_3(VAR_3, VAR_7);

 return VAR_6;
}
