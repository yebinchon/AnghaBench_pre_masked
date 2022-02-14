
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_revision_info {int impl_ver; } ;
struct scmi_handle {struct scmi_revision_info* version; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_4(const struct scmi_handle *VAR_2)
{
 int VAR_3;
 __le32 *VAR_4;
 struct scmi_xfer *VAR_5;
 struct scmi_revision_info *VAR_6 = VAR_2->version;

 VAR_3 = FUNC_2(VAR_2, VAR_0,
     VAR_1, 0, sizeof(*VAR_4), &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_5);
 if (!VAR_3) {
  VAR_4 = VAR_5->rx.buf;
  VAR_6->impl_ver = FUNC_0(*VAR_4);
 }

 FUNC_3(VAR_2, VAR_5);

 return VAR_3;
}
