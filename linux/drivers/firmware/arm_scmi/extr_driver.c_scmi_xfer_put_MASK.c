
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_xfer {int dummy; } ;
struct scmi_info {int tx_minfo; } ;
struct scmi_handle {int dummy; } ;


 int FUNC_0 (int *,struct scmi_xfer*) ;
 struct scmi_info* FUNC_1 (struct scmi_handle const*) ;

void FUNC_2(const struct scmi_handle *VAR_0, struct scmi_xfer *VAR_1)
{
 struct scmi_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->tx_minfo, VAR_1);
}
