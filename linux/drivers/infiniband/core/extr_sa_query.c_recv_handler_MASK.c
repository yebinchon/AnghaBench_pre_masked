
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_sa_query {int (* callback ) (struct ib_sa_query*,int ,struct ib_sa_mad*) ;} ;
struct ib_sa_mad {int dummy; } ;
struct ib_mad_send_buf {struct ib_sa_query** context; } ;
struct TYPE_7__ {TYPE_2__* mad; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; TYPE_4__* wc; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {TYPE_1__ mad_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_mad_recv_wc*) ;
 int FUNC_1 (struct ib_sa_query*,int ,struct ib_sa_mad*) ;
 int FUNC_2 (struct ib_sa_query*,int ,struct ib_sa_mad*) ;

__attribute__((used)) static void FUNC_3(struct ib_mad_agent *VAR_3,
    struct ib_mad_send_buf *VAR_4,
    struct ib_mad_recv_wc *VAR_5)
{
 struct ib_sa_query *VAR_6;

 if (!VAR_4)
  return;

 VAR_6 = VAR_4->context[0];
 if (VAR_6->callback) {
  if (VAR_5->wc->status == VAR_2)
   VAR_6->callback(VAR_6,
     VAR_5->recv_buf.mad->mad_hdr.status ?
     -VAR_0 : 0,
     (struct ib_sa_mad *) VAR_5->recv_buf.mad);
  else
   VAR_6->callback(VAR_6, -VAR_1, ((void*)0));
 }

 FUNC_0(VAR_5);
}
