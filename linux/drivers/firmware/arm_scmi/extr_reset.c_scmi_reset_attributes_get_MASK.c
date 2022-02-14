
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_reset_info {int num_domains; } ;
struct scmi_handle {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_4(const struct scmi_handle *VAR_3,
         struct scmi_reset_info *VAR_4)
{
 int VAR_5;
 struct scmi_xfer *VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_1,
     VAR_2, 0, sizeof(VAR_7), &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_6);
 if (!VAR_5) {
  VAR_7 = FUNC_0(VAR_6->rx.buf);
  VAR_4->num_domains = VAR_7 & VAR_0;
 }

 FUNC_3(VAR_3, VAR_6);
 return VAR_5;
}
