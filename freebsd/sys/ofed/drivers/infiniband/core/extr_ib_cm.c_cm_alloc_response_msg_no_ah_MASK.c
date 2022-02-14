
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_buf {int dummy; } ;
struct ib_mad_recv_wc {TYPE_1__* wc; } ;
struct cm_port {int mad_agent; } ;
struct TYPE_2__ {int pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_mad_send_buf* FUNC_0 (int ,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct ib_mad_send_buf *FUNC_1(struct cm_port *VAR_4,
          struct ib_mad_recv_wc *VAR_5)
{
 return FUNC_0(VAR_4->mad_agent, 1, VAR_5->wc->pkey_index,
      0, VAR_3, VAR_2,
      VAR_0,
      VAR_1);
}
