
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_sa_query {TYPE_2__* sm_ah; TYPE_3__* mad_buf; TYPE_1__* port; } ;
typedef int gfp_t ;
struct TYPE_7__ {int ah; } ;
struct TYPE_6__ {int ah; int ref; int pkey_index; } ;
struct TYPE_5__ {int agent; int ah_lock; TYPE_2__* sm_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ib_sa_query *VAR_6, gfp_t VAR_7)
{
 unsigned long VAR_8;

 FUNC_4(&VAR_6->port->ah_lock, VAR_8);
 if (!VAR_6->port->sm_ah) {
  FUNC_5(&VAR_6->port->ah_lock, VAR_8);
  return -VAR_0;
 }
 FUNC_2(&VAR_6->port->sm_ah->ref);
 VAR_6->sm_ah = VAR_6->port->sm_ah;
 FUNC_5(&VAR_6->port->ah_lock, VAR_8);

 VAR_6->mad_buf = FUNC_1(VAR_6->port->agent, 1,
         VAR_6->sm_ah->pkey_index,
         0, VAR_4, VAR_3,
         VAR_7,
         VAR_2);
 if (FUNC_0(VAR_6->mad_buf)) {
  FUNC_3(&VAR_6->sm_ah->ref, VAR_5);
  return -VAR_1;
 }

 VAR_6->mad_buf->ah = VAR_6->sm_ah->ah;

 return 0;
}
