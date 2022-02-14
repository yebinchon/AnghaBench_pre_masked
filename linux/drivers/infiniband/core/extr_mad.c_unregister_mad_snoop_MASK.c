
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_snoop_private {size_t snoop_index; int agent; int comp; struct ib_mad_qp_info* qp_info; } ;
struct ib_mad_qp_info {int snoop_lock; int snoop_count; int ** snoop_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_snoop_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_mad_snoop_private*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ib_mad_snoop_private *VAR_0)
{
 struct ib_mad_qp_info *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0->qp_info;
 FUNC_4(&VAR_1->snoop_lock, VAR_2);
 VAR_1->snoop_table[VAR_0->snoop_index] = ((void*)0);
 FUNC_0(&VAR_1->snoop_count);
 FUNC_5(&VAR_1->snoop_lock, VAR_2);

 FUNC_1(VAR_0);
 FUNC_6(&VAR_0->comp);

 FUNC_2(&VAR_0->agent);

 FUNC_3(VAR_0);
}
