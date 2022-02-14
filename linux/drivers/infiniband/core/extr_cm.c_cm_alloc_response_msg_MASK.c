
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_send_buf {int dummy; } ;
struct ib_mad_recv_wc {int dummy; } ;
struct cm_port {int dummy; } ;


 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_mad_send_buf*) ;
 struct ib_mad_send_buf* FUNC_2 (struct cm_port*,struct ib_mad_recv_wc*) ;
 int FUNC_3 (struct cm_port*,struct ib_mad_recv_wc*,struct ib_mad_send_buf*) ;
 int FUNC_4 (struct ib_mad_send_buf*) ;

__attribute__((used)) static int FUNC_5(struct cm_port *VAR_0,
     struct ib_mad_recv_wc *VAR_1,
     struct ib_mad_send_buf **VAR_2)
{
 struct ib_mad_send_buf *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_3);
  return VAR_4;
 }

 *VAR_2 = VAR_3;
 return 0;
}
