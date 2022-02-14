
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_info {int users; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct scmi_info* FUNC_1 (struct scmi_handle const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

int FUNC_4(const struct scmi_handle *VAR_2)
{
 struct scmi_info *VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(&VAR_1);
 if (!FUNC_0(!VAR_3->users))
  VAR_3->users--;
 FUNC_3(&VAR_1);

 return 0;
}
