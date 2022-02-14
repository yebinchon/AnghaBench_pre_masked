
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_query_srq_resp {int srq_limit; int max_sge; int max_wr; } ;
struct ib_uverbs_query_srq {int srq_handle; } ;
struct ib_srq_attr {int srq_limit; int max_sge; int max_wr; } ;
struct ib_srq {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_srq*,struct ib_srq_attr*) ;
 int FUNC_1 (struct ib_uverbs_query_srq_resp*,int ,int) ;
 struct ib_srq* FUNC_2 (struct ib_srq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_3 (struct ib_srq*) ;
 int FUNC_4 (struct uverbs_attr_bundle*,struct ib_uverbs_query_srq*,int) ;
 int FUNC_5 (struct uverbs_attr_bundle*,struct ib_uverbs_query_srq_resp*,int) ;

__attribute__((used)) static int FUNC_6(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_query_srq VAR_3;
 struct ib_uverbs_query_srq_resp VAR_4;
 struct ib_srq_attr VAR_5;
 struct ib_srq *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_6, VAR_1, VAR_3.srq_handle, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, &VAR_5);

 FUNC_3(VAR_6);

 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_4, 0, sizeof VAR_4);

 VAR_4.max_wr = VAR_5.max_wr;
 VAR_4.max_sge = VAR_5.max_sge;
 VAR_4.srq_limit = VAR_5.srq_limit;

 return FUNC_5(VAR_2, &VAR_4, sizeof(VAR_4));
}
