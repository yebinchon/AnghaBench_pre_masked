
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_close_xrcd {int xrcd_handle; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_close_xrcd*,int) ;

__attribute__((used)) static int FUNC_2(struct uverbs_attr_bundle *VAR_1)
{
 struct ib_uverbs_close_xrcd VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_2.xrcd_handle, VAR_1);
}
