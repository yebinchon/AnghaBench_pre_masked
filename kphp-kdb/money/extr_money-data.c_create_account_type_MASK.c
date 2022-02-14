
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_money_new_atype {int acc_type_id; scalar_t__ currency; scalar_t__ acc_class; scalar_t__ creator_id; int comm_len; int comment; int create_code; int block_code; int withdraw_code; int access_code; int admin_code; int auth_code; int ip; } ;
struct account_type {scalar_t__ currency; int acc_type_id; scalar_t__ acc_class; scalar_t__ creator_id; int comm_len; int * comment; int create_code; int block_code; int withdraw_code; int access_code; int admin_code; int auth_code; int ip; } ;


 struct account_type** VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int) ;
 struct account_type* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5 (struct lev_money_new_atype *VAR_5) {
  struct account_type *VAR_6;
  int VAR_7 = VAR_5->acc_type_id;
  FUNC_0 (VAR_7 > 0 && VAR_7 <= VAR_1);
  FUNC_0 (VAR_5->currency >= VAR_3 && VAR_5->currency <= VAR_2);
  if (!VAR_0[VAR_7]) {
    VAR_0[VAR_7] = VAR_6 = FUNC_4 (sizeof (struct account_type));
    VAR_6->currency = VAR_5->currency;
    VAR_6->acc_type_id = VAR_7;
    VAR_6->acc_class = VAR_5->acc_class;
    VAR_6->creator_id = VAR_5->creator_id;
    VAR_6->ip = VAR_5->ip;
  } else {
    VAR_6 = VAR_0[VAR_7];
    FUNC_0 (VAR_6->currency == VAR_5->currency && VAR_6->creator_id == VAR_5->creator_id && VAR_6->acc_class == VAR_5->acc_class);
    FUNC_2 (VAR_6->comment, VAR_6->comm_len + 1);
  }
  VAR_6->auth_code = VAR_5->auth_code;
  VAR_6->admin_code = VAR_5->admin_code;
  VAR_6->access_code = VAR_5->access_code;
  VAR_6->withdraw_code = VAR_5->withdraw_code;
  VAR_6->block_code = VAR_5->block_code;
  VAR_6->create_code = VAR_5->create_code;
  VAR_6->comm_len = VAR_5->comm_len;
  FUNC_0 (VAR_6->comm_len >= 0 && VAR_6->comm_len <= 4096);
  VAR_6->comment = FUNC_3 (VAR_5->comm_len + 1);
  FUNC_1 (VAR_6->comment, VAR_5->comment, VAR_6->comm_len + 1);
  FUNC_0 (!VAR_6->comment[VAR_6->comm_len]);

  ++VAR_4;

  return 0;
}
