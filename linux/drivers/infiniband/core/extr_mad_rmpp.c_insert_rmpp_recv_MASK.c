
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mad_rmpp_recv {int list; int rmpp_wc; } ;
struct ib_mad_agent_private {int rmpp_list; } ;


 struct mad_rmpp_recv* FUNC_0 (struct ib_mad_agent_private*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct mad_rmpp_recv *
FUNC_2(struct ib_mad_agent_private *VAR_0,
   struct mad_rmpp_recv *VAR_1)
{
 struct mad_rmpp_recv *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->rmpp_wc);
 if (!VAR_2)
  FUNC_1(&VAR_1->list, &VAR_0->rmpp_list);

 return VAR_2;
}
