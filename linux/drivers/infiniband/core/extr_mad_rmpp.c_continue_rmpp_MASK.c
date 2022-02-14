
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mad_rmpp_recv {scalar_t__ state; int newwin; int last_ack; int seg_num; int lock; struct ib_mad_recv_buf* cur_seg_buf; TYPE_1__* rmpp_wc; } ;
struct TYPE_5__ {int list; } ;
struct ib_mad_recv_wc {TYPE_2__ recv_buf; } ;
struct ib_mad_recv_buf {int list; } ;
struct ib_mad_agent_private {int dummy; } ;
struct TYPE_4__ {int rmpp_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mad_rmpp_recv*,struct ib_mad_recv_wc*) ;
 struct mad_rmpp_recv* FUNC_1 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 struct ib_mad_recv_wc* FUNC_2 (struct mad_rmpp_recv*) ;
 int FUNC_3 (struct mad_rmpp_recv*) ;
 struct ib_mad_recv_buf* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct ib_mad_recv_buf*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct ib_mad_recv_wc*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct mad_rmpp_recv*,TYPE_2__*) ;
 scalar_t__ FUNC_12 (struct ib_mad_agent_private*) ;

__attribute__((used)) static struct ib_mad_recv_wc *
FUNC_13(struct ib_mad_agent_private *VAR_2,
       struct ib_mad_recv_wc *VAR_3)
{
 struct mad_rmpp_recv *VAR_4;
 struct ib_mad_recv_buf *VAR_5;
 struct ib_mad_recv_wc *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  goto drop1;

 VAR_7 = FUNC_6(&VAR_3->recv_buf);

 FUNC_9(&VAR_4->lock, VAR_8);
 if ((VAR_4->state == VAR_1) ||
     (VAR_7 > VAR_4->newwin))
  goto drop3;

 if ((VAR_7 <= VAR_4->last_ack) ||
     (VAR_4->state == VAR_0)) {
  FUNC_10(&VAR_4->lock, VAR_8);
  FUNC_0(VAR_4, VAR_3);
  goto drop2;
 }

 VAR_5 = FUNC_4(&VAR_4->rmpp_wc->rmpp_list, VAR_7);
 if (!VAR_5)
  goto drop3;

 VAR_6 = ((void*)0);
 FUNC_8(&VAR_3->recv_buf.list, &VAR_5->list);
 if (VAR_4->cur_seg_buf == VAR_5) {
  FUNC_11(VAR_4, &VAR_3->recv_buf);
  if (FUNC_5(VAR_4->cur_seg_buf)) {
   VAR_4->state = VAR_0;
   FUNC_10(&VAR_4->lock, VAR_8);
   VAR_6 = FUNC_2(VAR_4);
   goto out;
  } else if (VAR_4->seg_num == VAR_4->newwin) {
   VAR_4->newwin += FUNC_12(VAR_2);
   FUNC_10(&VAR_4->lock, VAR_8);
   FUNC_0(VAR_4, VAR_3);
   goto out;
  }
 }
 FUNC_10(&VAR_4->lock, VAR_8);
out:
 FUNC_3(VAR_4);
 return VAR_6;

drop3: FUNC_10(&VAR_4->lock, VAR_8);
drop2: FUNC_3(VAR_4);
drop1: FUNC_7(VAR_3);
 return ((void*)0);
}
