
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debugnet_proto_aux {int dp_offset_start; } ;
struct TYPE_2__ {scalar_t__ nd_buf_len; int nd_pcb; int nd_tx_off; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,struct debugnet_proto_aux*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_3;

 VAR_3 = 0;
 if (VAR_2.nd_buf_len != 0) {
  struct debugnet_proto_aux VAR_4 = {
   .dp_offset_start = VAR_2.nd_tx_off,
  };
  VAR_3 = FUNC_0(VAR_2.nd_pcb, VAR_0, VAR_1,
      VAR_2.nd_buf_len, &VAR_4);
  if (VAR_3 == 0)
   VAR_2.nd_buf_len = 0;
 }
 return (VAR_3);
}
