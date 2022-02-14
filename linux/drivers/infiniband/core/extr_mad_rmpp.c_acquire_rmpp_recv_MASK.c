
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mad_rmpp_recv {int refcount; } ;
struct ib_mad_recv_wc {int dummy; } ;
struct ib_mad_agent_private {int lock; } ;


 int FUNC_0 (int *) ;
 struct mad_rmpp_recv* FUNC_1 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct mad_rmpp_recv *
FUNC_4(struct ib_mad_agent_private *VAR_0,
    struct ib_mad_recv_wc *VAR_1)
{
 struct mad_rmpp_recv *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_2->refcount);
 FUNC_3(&VAR_0->lock, VAR_3);
 return VAR_2;
}
