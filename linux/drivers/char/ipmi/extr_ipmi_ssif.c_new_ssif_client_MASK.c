
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; struct ssif_addr_info* platform_data; int type; } ;
struct ssif_addr_info {int debug; int slave_addr; int addr_src; int link; struct device* dev; TYPE_1__ binfo; int adapter_name; } ;
struct device {int dummy; } ;
typedef enum ipmi_addr_src { ____Placeholder_ipmi_addr_src } ipmi_addr_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct ssif_addr_info*) ;
 int FUNC_1 (struct ssif_addr_info*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ssif_addr_info*) ;
 int FUNC_3 (char*,int ) ;
 struct ssif_addr_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(int VAR_8, char *VAR_9,
      int VAR_10, int VAR_11,
      enum ipmi_addr_src VAR_12,
      struct device *VAR_13)
{
 struct ssif_addr_info *VAR_14;
 int VAR_15 = 0;

 FUNC_6(&VAR_7);
 if (FUNC_8(VAR_8, VAR_9, 0)) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_15 = -VAR_2;
  goto out_unlock;
 }

 if (VAR_9) {
  VAR_14->adapter_name = FUNC_3(VAR_9, VAR_3);
  if (!VAR_14->adapter_name) {
   FUNC_2(VAR_14);
   VAR_15 = -VAR_2;
   goto out_unlock;
  }
 }

 FUNC_9(VAR_14->binfo.type, VAR_0,
  sizeof(VAR_14->binfo.type));
 VAR_14->binfo.addr = VAR_8;
 VAR_14->binfo.platform_data = VAR_14;
 VAR_14->debug = VAR_10;
 VAR_14->slave_addr = VAR_11;
 VAR_14->addr_src = VAR_12;
 VAR_14->dev = VAR_13;

 if (VAR_13)
  FUNC_0(VAR_13, VAR_14);

 FUNC_5(&VAR_14->link, &VAR_6);

 if (VAR_4)
  FUNC_1(VAR_14, VAR_5);


out_unlock:
 FUNC_7(&VAR_7);
 return VAR_15;
}
