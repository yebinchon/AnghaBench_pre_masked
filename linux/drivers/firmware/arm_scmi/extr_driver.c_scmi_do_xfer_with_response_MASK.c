
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_xfer {int * async_done; } ;
struct scmi_handle {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(const struct scmi_handle *VAR_3,
          struct scmi_xfer *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 VAR_4->async_done = &VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_5 && !FUNC_3(VAR_4->async_done, VAR_6))
  VAR_5 = -VAR_0;

 VAR_4->async_done = ((void*)0);
 return VAR_5;
}
