
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lev_copyexec_aux_transaction_header {int mask; } ;
struct TYPE_3__ {scalar_t__ transaction_id; int binlog_pos; int key_id; int ilen; int input; } ;
typedef TYPE_1__ replay_transaction_info_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,unsigned char**,int*) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (int,char*,scalar_t__,int,int) ;

void FUNC_5 (replay_transaction_info_t *VAR_4) {
  unsigned char *VAR_5;
  int VAR_6;
  int VAR_7 = FUNC_1 (VAR_4->input, VAR_4->ilen, VAR_4->key_id, VAR_4->binlog_pos, VAR_4->transaction_id, &VAR_5, &VAR_6);
  if (VAR_7 < 0) {
    VAR_1 = VAR_4->binlog_pos;
    return;
  }
  if (FUNC_3 (VAR_5, VAR_6)) {
    struct lev_copyexec_aux_transaction_header *VAR_8 = (struct lev_copyexec_aux_transaction_header *) VAR_5;
    if (!(VAR_8->mask & VAR_0)) {
      FUNC_4 (3, "Skip synchronization point. (transaction_id: %d, mask: 0x%x, instance_mask: 0x%x)\n", VAR_4->transaction_id, VAR_8->mask, VAR_0);
      FUNC_2 (VAR_5);
      return;
    }
    FUNC_0 (VAR_2 < VAR_4->transaction_id);
    VAR_2 = VAR_4->transaction_id;
    VAR_3 = VAR_4->binlog_pos;
  }
  FUNC_2 (VAR_5);
}
