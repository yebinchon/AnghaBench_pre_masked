
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_conn {int qp; } ;
struct TYPE_2__ {int send_wr; } ;
struct isert_cmd {TYPE_1__ tx_desc; int rx_desc; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct isert_conn*,int ) ;

__attribute__((used)) static int
FUNC_3(struct isert_conn *VAR_0, struct isert_cmd *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1->rx_desc);
 if (VAR_2) {
  FUNC_1("ib_post_recv failed with %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0->qp, &VAR_1->tx_desc.send_wr, ((void*)0));
 if (VAR_2) {
  FUNC_1("ib_post_send failed with %d\n", VAR_2);
  return VAR_2;
 }
 return VAR_2;
}
