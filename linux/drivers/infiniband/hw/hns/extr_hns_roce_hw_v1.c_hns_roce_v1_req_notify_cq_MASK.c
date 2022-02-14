
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_cq {int dummy; } ;
struct hns_roce_cq {int cons_index; int cq_depth; int cqn; int cq_db_l; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 struct hns_roce_cq* FUNC_4 (struct ib_cq*) ;

__attribute__((used)) static int FUNC_5(struct ib_cq *VAR_11,
         enum ib_cq_notify_flags VAR_12)
{
 struct hns_roce_cq *VAR_13 = FUNC_4(VAR_11);
 u32 VAR_14;
 __le32 VAR_15[2] = {};

 VAR_14 = (VAR_12 & VAR_3) ==
       VAR_2 ? VAR_0 : VAR_1;




 VAR_15[0] =
  FUNC_0(VAR_13->cons_index & ((VAR_13->cq_depth << 1) - 1));
 FUNC_2(VAR_15[1], VAR_8, 1);
 FUNC_3(VAR_15[1], VAR_4,
         VAR_7, 3);
 FUNC_3(VAR_15[1], VAR_5,
         VAR_6, 1);
 FUNC_3(VAR_15[1], VAR_9,
         VAR_10,
         VAR_13->cqn | VAR_14);

 FUNC_1(VAR_15, VAR_13->cq_db_l);

 return 0;
}
