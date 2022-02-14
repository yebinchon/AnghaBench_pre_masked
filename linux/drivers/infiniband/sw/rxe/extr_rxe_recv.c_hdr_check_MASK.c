
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxe_qp {int dummy; } ;
struct rxe_port {int qp_gsi_index; } ;
struct rxe_pkt_info {int mask; struct rxe_qp* qp; struct rxe_dev* rxe; } ;
struct rxe_dev {int qp_pool; struct rxe_port port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_1 (struct rxe_pkt_info*) ;
 int FUNC_2 (struct rxe_dev*,struct rxe_pkt_info*,struct rxe_qp*) ;
 int FUNC_3 (struct rxe_dev*,struct rxe_pkt_info*,int,struct rxe_qp*) ;
 int FUNC_4 (struct rxe_dev*,struct rxe_pkt_info*,struct rxe_qp*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct rxe_qp*) ;
 struct rxe_qp* FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct rxe_pkt_info *VAR_4)
{
 struct rxe_dev *VAR_5 = VAR_4->rxe;
 struct rxe_port *VAR_6 = &VAR_5->port;
 struct rxe_qp *VAR_7 = ((void*)0);
 u32 VAR_8 = FUNC_0(VAR_4);
 int VAR_9;
 int VAR_10;

 if (FUNC_9(FUNC_1(VAR_4) != VAR_0)) {
  FUNC_6("bad tver\n");
  goto err1;
 }

 if (FUNC_9(VAR_8 == 0)) {
  FUNC_5("QP 0 not supported");
  goto err1;
 }

 if (VAR_8 != VAR_2) {
  VAR_9 = (VAR_8 == 1) ? VAR_6->qp_gsi_index : VAR_8;

  VAR_7 = FUNC_8(&VAR_5->qp_pool, VAR_9);
  if (FUNC_9(!VAR_7)) {
   FUNC_6("no qp matches qpn 0x%x\n", VAR_8);
   goto err1;
  }

  VAR_10 = FUNC_4(VAR_5, VAR_4, VAR_7);
  if (FUNC_9(VAR_10))
   goto err2;

  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_7);
  if (FUNC_9(VAR_10))
   goto err2;

  VAR_10 = FUNC_3(VAR_5, VAR_4, VAR_8, VAR_7);
  if (FUNC_9(VAR_10))
   goto err2;
 } else {
  if (FUNC_9((VAR_4->mask & VAR_3) == 0)) {
   FUNC_6("no grh for mcast qpn\n");
   goto err1;
  }
 }

 VAR_4->qp = VAR_7;
 return 0;

err2:
 FUNC_7(VAR_7);
err1:
 return -VAR_1;
}
