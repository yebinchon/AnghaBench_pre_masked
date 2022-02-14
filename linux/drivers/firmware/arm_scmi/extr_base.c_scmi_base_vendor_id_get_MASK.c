
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_revision_info {char* sub_vendor_id; char* vendor_id; } ;
struct scmi_handle {struct scmi_revision_info* version; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_5(const struct scmi_handle *VAR_3, bool VAR_4)
{
 u8 VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8;
 struct scmi_xfer *VAR_9;
 struct scmi_revision_info *VAR_10 = VAR_3->version;

 if (VAR_4) {
  VAR_5 = VAR_0;
  VAR_8 = VAR_10->sub_vendor_id;
  VAR_7 = FUNC_0(VAR_10->sub_vendor_id);
 } else {
  VAR_5 = VAR_1;
  VAR_8 = VAR_10->vendor_id;
  VAR_7 = FUNC_0(VAR_10->vendor_id);
 }

 VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_2, 0, VAR_7, &VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_9);
 if (!VAR_6)
  FUNC_1(VAR_8, VAR_9->rx.buf, VAR_7);

 FUNC_4(VAR_3, VAR_9);

 return VAR_6;
}
