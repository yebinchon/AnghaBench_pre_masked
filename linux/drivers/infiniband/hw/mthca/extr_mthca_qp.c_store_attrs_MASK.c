
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_sqp {int send_psn; int qkey; int pkey_index; } ;
struct ib_qp_attr {int sq_psn; int qkey; int pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mthca_sqp *VAR_3, const struct ib_qp_attr *VAR_4,
   int VAR_5)
{
 if (VAR_5 & VAR_0)
  VAR_3->pkey_index = VAR_4->pkey_index;
 if (VAR_5 & VAR_1)
  VAR_3->qkey = VAR_4->qkey;
 if (VAR_5 & VAR_2)
  VAR_3->send_psn = VAR_4->sq_psn;
}
