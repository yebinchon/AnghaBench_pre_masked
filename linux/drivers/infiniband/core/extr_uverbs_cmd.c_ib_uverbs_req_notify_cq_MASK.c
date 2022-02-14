
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_req_notify_cq {scalar_t__ solicited_only; int cq_handle; } ;
struct ib_cq {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_cq*,int ) ;
 struct ib_cq* FUNC_1 (struct ib_cq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_cq*) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_req_notify_cq*,int) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_4)
{
 struct ib_uverbs_req_notify_cq VAR_5;
 struct ib_cq *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_1(VAR_6, VAR_3, VAR_5.cq_handle, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_5.solicited_only ?
    VAR_2 : VAR_1);

 FUNC_2(VAR_6);

 return 0;
}
