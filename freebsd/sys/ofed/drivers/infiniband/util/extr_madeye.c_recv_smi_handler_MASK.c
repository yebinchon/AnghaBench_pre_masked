
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_smp {int dummy; } ;
struct TYPE_5__ {TYPE_3__* mad; } ;
struct ib_mad_recv_wc {TYPE_2__ recv_buf; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_4__ {scalar_t__ mgmt_class; int attr_id; } ;
struct TYPE_6__ {TYPE_1__ mad_hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ib_mad_agent *VAR_3,
        struct ib_mad_recv_wc *VAR_4)
{
 if (!VAR_2 && VAR_4->recv_buf.mad->mad_hdr.mgmt_class != VAR_1)
  return;
 if (VAR_0 && FUNC_0(VAR_4->recv_buf.mad->mad_hdr.attr_id) != VAR_0)
  return;

 FUNC_2("Madeye:recv SMP\n");
 FUNC_1((struct ib_smp *)&VAR_4->recv_buf.mad->mad_hdr);
}
