
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_mad_send_wc {TYPE_1__* send_buf; } ;
struct TYPE_2__ {scalar_t__* context; scalar_t__ ah; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct ib_mad_send_wc *VAR_1)
{
 if (VAR_1->send_buf->context[0] == VAR_1->send_buf->ah)
  FUNC_1(VAR_1->send_buf->ah,
    VAR_0);
 FUNC_0(VAR_1->send_buf);
}
