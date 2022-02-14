
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct scmi_info {scalar_t__* protocols_imp; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 struct scmi_info* FUNC_0 (struct scmi_handle const*) ;

__attribute__((used)) static bool
FUNC_1(const struct scmi_handle *VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct scmi_info *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->protocols_imp)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_4->protocols_imp[VAR_3] == VAR_2)
   return 1;
 return 0;
}
