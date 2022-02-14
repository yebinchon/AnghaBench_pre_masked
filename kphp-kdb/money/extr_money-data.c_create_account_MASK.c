
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lev_money_new_acc {size_t acc_type_id; scalar_t__ currency; int comm_len; int comment; int withdraw_code; int access_code; int auth_code; int ip; int owner_id; int acc_id; } ;
struct account {int comm_len; TYPE_1__* acc_type; int * comment; int withdraw_code; int access_code; int auth_code; int ip; int owner_id; int acc_id; } ;
struct TYPE_2__ {scalar_t__ currency; int acc_class; } ;


 TYPE_1__** VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct account*) ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_4 (int) ;
 struct account* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (struct lev_money_new_acc *VAR_6, int VAR_7) {
  struct account *VAR_8;

  FUNC_1 ((unsigned) VAR_6->acc_type_id <= VAR_1 && VAR_0[VAR_6->acc_type_id]);
  FUNC_1 (!FUNC_2 (VAR_6->acc_type_id, VAR_6->acc_id));
  FUNC_1 (VAR_6->currency == VAR_0[VAR_6->acc_type_id]->currency);

  VAR_8 = FUNC_5 (sizeof (struct account));
  VAR_8->acc_type = VAR_0[VAR_6->acc_type_id];
  VAR_8->acc_id = VAR_6->acc_id;

  VAR_8->owner_id = VAR_6->owner_id;
  VAR_8->ip = VAR_6->ip;
  VAR_8->auth_code = VAR_6->auth_code;

  if (VAR_7) {
    VAR_8->access_code = VAR_6->access_code;
    VAR_8->withdraw_code = VAR_6->withdraw_code;
    if (VAR_6->comm_len) {
      VAR_8->comm_len = VAR_6->comm_len;
      FUNC_1 (VAR_8->comm_len >= 0 && VAR_8->comm_len <= 4096);
      VAR_8->comment = FUNC_4 (VAR_6->comm_len + 1);
      FUNC_3 (VAR_8->comment, VAR_6->comment, VAR_6->comm_len + 1);
      FUNC_1 (!VAR_8->comment[VAR_8->comm_len]);
    }
  }

  FUNC_0 (VAR_8);

  ++VAR_5;
  if (VAR_8->acc_type->acc_class & 4) {
    ++VAR_4;
  }

  ++VAR_3[VAR_6->currency-VAR_2];

  return 0;
}
