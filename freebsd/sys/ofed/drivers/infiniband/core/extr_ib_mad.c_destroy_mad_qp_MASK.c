
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_qp_info {int snoop_table; int qp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ib_mad_qp_info *VAR_0)
{
 if (!VAR_0->qp)
  return;

 FUNC_0(VAR_0->qp);
 FUNC_1(VAR_0->snoop_table);
}
