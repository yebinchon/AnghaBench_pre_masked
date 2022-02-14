
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hns_roce_v2_cq_context {int byte_52_cqe_cnt; int byte_56_cqe_period_maxcnt; int byte_32_cq_ci; int byte_28_cq_pi; int byte_16_hop_addr; int byte_8_cqn; int byte_4_pg_ceqn; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct sk_buff*,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_19,
       struct hns_roce_v2_cq_context *VAR_20)
{
 if (FUNC_0(VAR_19, "state",
       FUNC_1(VAR_20->byte_4_pg_ceqn,
        VAR_7,
        VAR_8)))
  goto err;

 if (FUNC_0(VAR_19, "ceqn",
       FUNC_1(VAR_20->byte_4_pg_ceqn,
        VAR_9,
        VAR_10)))
  goto err;

 if (FUNC_0(VAR_19, "cqn",
       FUNC_1(VAR_20->byte_8_cqn,
        VAR_17,
        VAR_18)))
  goto err;

 if (FUNC_0(VAR_19, "hopnum",
       FUNC_1(VAR_20->byte_16_hop_addr,
        VAR_1,
        VAR_2)))
  goto err;

 if (FUNC_0(
      VAR_19, "pi",
      FUNC_1(VAR_20->byte_28_cq_pi,
       VAR_3,
       VAR_4)))
  goto err;

 if (FUNC_0(
      VAR_19, "ci",
      FUNC_1(VAR_20->byte_32_cq_ci,
       VAR_5,
       VAR_6)))
  goto err;

 if (FUNC_0(
      VAR_19, "coalesce",
      FUNC_1(VAR_20->byte_56_cqe_period_maxcnt,
       VAR_13,
       VAR_14)))
  goto err;

 if (FUNC_0(
      VAR_19, "period",
      FUNC_1(VAR_20->byte_56_cqe_period_maxcnt,
       VAR_15,
       VAR_16)))
  goto err;

 if (FUNC_0(VAR_19, "cnt",
       FUNC_1(VAR_20->byte_52_cqe_cnt,
        VAR_11,
        VAR_12)))
  goto err;

 return 0;

err:
 return -VAR_0;
}
