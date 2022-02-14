
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mpa_len; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;
struct siw_rx_stream {TYPE_2__ hdr; int fpdu_part_rem; } ;
struct siw_qp {struct siw_rx_stream rx_stream; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct siw_qp*) ;

int FUNC_3(struct siw_qp *VAR_1)
{
 struct siw_rx_stream *VAR_2 = &VAR_1->rx_stream;

 if (!VAR_2->fpdu_part_rem)
  return 0;

 FUNC_1("siw: [QP %u]: rreq with mpa len %d\n", FUNC_2(VAR_1),
  FUNC_0(VAR_2->hdr.ctrl.mpa_len));

 return -VAR_0;
}
