
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_create_xsrq {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (struct uverbs_attr_bundle*,struct ib_uverbs_create_xsrq*,int *) ;
 int FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_create_xsrq*,int) ;

__attribute__((used)) static int FUNC_2(struct uverbs_attr_bundle *VAR_0)
{
 struct ib_uverbs_create_xsrq VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1, sizeof(VAR_1));
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, &VAR_1, &VAR_0->driver_udata);
}
