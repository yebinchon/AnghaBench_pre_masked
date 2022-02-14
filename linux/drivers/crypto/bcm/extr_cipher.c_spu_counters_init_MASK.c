
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_chan; } ;
struct TYPE_4__ {int bad_icv; int mb_send_fail; int mb_no_spc; int * aead_cnt; int * hmac_cnt; int * hash_cnt; int ** cipher_cnt; int * setkey_cnt; int * op_counts; int bytes_out; int bytes_in; TYPE_1__ spu; int next_chan; int stream_count; int session_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5.session_count, 0);
 FUNC_1(&VAR_5.stream_count, 0);
 FUNC_1(&VAR_5.next_chan, (int)VAR_5.spu.num_chan);
 FUNC_0(&VAR_5.bytes_in, 0);
 FUNC_0(&VAR_5.bytes_out, 0);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_1(&VAR_5.op_counts[VAR_6], 0);
  FUNC_1(&VAR_5.setkey_cnt[VAR_6], 0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   FUNC_1(&VAR_5.cipher_cnt[VAR_6][VAR_7], 0);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_1(&VAR_5.hash_cnt[VAR_6], 0);
  FUNC_1(&VAR_5.hmac_cnt[VAR_6], 0);
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_1(&VAR_5.aead_cnt[VAR_6], 0);

 FUNC_1(&VAR_5.mb_no_spc, 0);
 FUNC_1(&VAR_5.mb_send_fail, 0);
 FUNC_1(&VAR_5.bad_icv, 0);
}
