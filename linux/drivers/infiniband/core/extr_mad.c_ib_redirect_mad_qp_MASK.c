
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_qp {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
typedef int ib_mad_send_handler ;
typedef int ib_mad_recv_handler ;


 int VAR_0 ;
 struct ib_mad_agent* FUNC_0 (int ) ;

struct ib_mad_agent *FUNC_1(struct ib_qp *VAR_1,
     u8 VAR_2,
     ib_mad_send_handler VAR_3,
     ib_mad_recv_handler VAR_4,
     void *VAR_5)
{
 return FUNC_0(-VAR_0);
}
