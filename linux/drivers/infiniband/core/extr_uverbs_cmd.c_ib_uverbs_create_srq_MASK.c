
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcmd ;
struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_create_xsrq {int srq_limit; int max_sge; int max_wr; int pd_handle; int srq_type; int user_handle; int response; } ;
struct ib_uverbs_create_srq {int srq_limit; int max_sge; int max_wr; int pd_handle; int user_handle; int response; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct uverbs_attr_bundle*,struct ib_uverbs_create_xsrq*,int *) ;
 int FUNC_1 (struct ib_uverbs_create_xsrq*,int ,int) ;
 int FUNC_2 (struct uverbs_attr_bundle*,struct ib_uverbs_create_srq*,int) ;

__attribute__((used)) static int FUNC_3(struct uverbs_attr_bundle *VAR_1)
{
 struct ib_uverbs_create_srq VAR_2;
 struct ib_uverbs_create_xsrq VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_4)
  return VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.response = VAR_2.response;
 VAR_3.user_handle = VAR_2.user_handle;
 VAR_3.srq_type = VAR_0;
 VAR_3.pd_handle = VAR_2.pd_handle;
 VAR_3.max_wr = VAR_2.max_wr;
 VAR_3.max_sge = VAR_2.max_sge;
 VAR_3.srq_limit = VAR_2.srq_limit;

 return FUNC_0(VAR_1, &VAR_3, &VAR_1->driver_udata);
}
