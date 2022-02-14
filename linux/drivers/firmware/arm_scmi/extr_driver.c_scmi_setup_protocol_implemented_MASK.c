
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scmi_info {int * protocols_imp; } ;
struct scmi_handle {int dummy; } ;


 struct scmi_info* FUNC_0 (struct scmi_handle const*) ;

void FUNC_1(const struct scmi_handle *VAR_0,
         u8 *VAR_1)
{
 struct scmi_info *VAR_2 = FUNC_0(VAR_0);

 VAR_2->protocols_imp = VAR_1;
}
