
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_cq {int cq_depth; int cqn; int cq_db_l; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hns_roce_cq *VAR_7, u32 VAR_8)
{
 __le32 VAR_9[2];

 VAR_9[0] = FUNC_0(VAR_8 & ((VAR_7->cq_depth << 1) - 1));
 VAR_9[1] = 0;
 FUNC_2(VAR_9[1], VAR_4, 1);
 FUNC_3(VAR_9[1], VAR_0,
         VAR_3, 3);
 FUNC_3(VAR_9[1], VAR_1,
         VAR_2, 0);
 FUNC_3(VAR_9[1], VAR_5,
         VAR_6, VAR_7->cqn);

 FUNC_1(VAR_9, VAR_7->cq_db_l);
}
