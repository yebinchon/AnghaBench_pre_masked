
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rdma_ah_attr {int dummy; } ;
struct ib_sa_query {long flags; TYPE_2__* sm_ah; TYPE_3__* mad_buf; TYPE_1__* port; } ;
typedef int gfp_t ;
struct TYPE_7__ {int ah; } ;
struct TYPE_6__ {int ah; int ref; int pkey_index; } ;
struct TYPE_5__ {int agent; int ah_lock; TYPE_2__* sm_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_1 (int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_5 (int ,struct rdma_ah_attr*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ib_sa_query *VAR_8, gfp_t VAR_9)
{
 struct rdma_ah_attr VAR_10;
 unsigned long VAR_11;

 FUNC_6(&VAR_8->port->ah_lock, VAR_11);
 if (!VAR_8->port->sm_ah) {
  FUNC_7(&VAR_8->port->ah_lock, VAR_11);
  return -VAR_0;
 }
 FUNC_2(&VAR_8->port->sm_ah->ref);
 VAR_8->sm_ah = VAR_8->port->sm_ah;
 FUNC_7(&VAR_8->port->ah_lock, VAR_11);





 if ((FUNC_5(VAR_8->sm_ah->ah, &VAR_10) < 0) ||
     !FUNC_4(&VAR_10)) {
  FUNC_3(&VAR_8->sm_ah->ref, VAR_7);
  return -VAR_0;
 }
 VAR_8->mad_buf = FUNC_1(VAR_8->port->agent, 1,
         VAR_8->sm_ah->pkey_index,
         0, VAR_4, VAR_3,
         VAR_9,
         ((VAR_8->flags & VAR_5) ?
          VAR_6 :
          VAR_2));
 if (FUNC_0(VAR_8->mad_buf)) {
  FUNC_3(&VAR_8->sm_ah->ref, VAR_7);
  return -VAR_1;
 }

 VAR_8->mad_buf->ah = VAR_8->sm_ah->ah;

 return 0;
}
