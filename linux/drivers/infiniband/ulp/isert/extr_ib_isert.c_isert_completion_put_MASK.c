
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_cmd {scalar_t__ pdu_buf_dma; int pdu_buf_len; } ;
struct iser_tx_desc {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,scalar_t__,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct isert_cmd*,int) ;
 int FUNC_3 (struct iser_tx_desc*,struct ib_device*) ;

__attribute__((used)) static void
FUNC_4(struct iser_tx_desc *VAR_1, struct isert_cmd *VAR_2,
       struct ib_device *VAR_3, bool VAR_4)
{
 if (VAR_2->pdu_buf_dma != 0) {
  FUNC_1("unmap single for isert_cmd->pdu_buf_dma\n");
  FUNC_0(VAR_3, VAR_2->pdu_buf_dma,
        VAR_2->pdu_buf_len, VAR_0);
  VAR_2->pdu_buf_dma = 0;
 }

 FUNC_3(VAR_1, VAR_3);
 FUNC_2(VAR_2, VAR_4);
}
