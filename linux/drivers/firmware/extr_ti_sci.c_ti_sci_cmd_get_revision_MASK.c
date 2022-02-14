
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_xfer {scalar_t__ xfer_buf; } ;
struct ti_sci_version_info {int firmware_description; int firmware_revision; int abi_minor; int abi_major; } ;
struct ti_sci_msg_resp_version {int firmware_description; int firmware_revision; int abi_minor; int abi_major; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_handle {struct ti_sci_version_info version; } ;
struct ti_sci_info {int minfo; struct ti_sci_handle handle; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ti_sci_xfer*) ;
 int FUNC_1 (struct ti_sci_xfer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ti_sci_info*,struct ti_sci_xfer*) ;
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,int ,int ,int,int) ;
 int FUNC_6 (int *,struct ti_sci_xfer*) ;

__attribute__((used)) static int FUNC_7(struct ti_sci_info *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct ti_sci_handle *VAR_4 = &VAR_2->handle;
 struct ti_sci_version_info *VAR_5 = &VAR_4->version;
 struct ti_sci_msg_resp_version *VAR_6;
 struct ti_sci_xfer *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_2, VAR_1,
       VAR_0,
       sizeof(struct ti_sci_msg_hdr),
       sizeof(*VAR_6));
 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_2(VAR_3, "Message alloc failed(%d)\n", VAR_8);
  return VAR_8;
 }

 VAR_6 = (struct ti_sci_msg_resp_version *)VAR_7->xfer_buf;

 VAR_8 = FUNC_4(VAR_2, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_3, "Mbox send fail %d\n", VAR_8);
  goto fail;
 }

 VAR_5->abi_major = VAR_6->abi_major;
 VAR_5->abi_minor = VAR_6->abi_minor;
 VAR_5->firmware_revision = VAR_6->firmware_revision;
 FUNC_3(VAR_5->firmware_description, VAR_6->firmware_description,
  sizeof(VAR_5->firmware_description));

fail:
 FUNC_6(&VAR_2->minfo, VAR_7);
 return VAR_8;
}
