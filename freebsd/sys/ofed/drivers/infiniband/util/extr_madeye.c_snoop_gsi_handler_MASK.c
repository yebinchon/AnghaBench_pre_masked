
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_rmpp_mad {int rmpp_hdr; } ;
struct ib_mad_send_wc {int dummy; } ;
struct ib_mad_send_buf {struct ib_mad_hdr* mad; } ;
struct ib_mad_hdr {scalar_t__ mgmt_class; int attr_id; } ;
struct ib_mad_agent {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ib_mad_hdr*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ib_mad_hdr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_agent *VAR_3,
         struct ib_mad_send_buf *VAR_4,
         struct ib_mad_send_wc *VAR_5)
{
 struct ib_mad_hdr *VAR_6 = VAR_4->mad;

 if (!VAR_1 && VAR_6->mgmt_class != VAR_2)
  return;
 if (VAR_0 && FUNC_0(VAR_6->attr_id) != VAR_0)
  return;

 FUNC_4("Madeye:sent GMP\n");
 FUNC_2(VAR_6);

 if (FUNC_1(VAR_6))
  FUNC_3(&((struct ib_rmpp_mad *) VAR_6)->rmpp_hdr);
}
