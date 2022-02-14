
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rxe_pkt_info {int mask; int qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct rxe_pkt_info *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_1->mask & VAR_0)
  FUNC_1(VAR_1->qp, VAR_2);
 else
  FUNC_0(VAR_1->qp, VAR_2);
}
