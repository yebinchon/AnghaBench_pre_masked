
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int created_at; scalar_t__ status; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (long long **VAR_1, transaction_t *VAR_2, int VAR_3) {
  *((*VAR_1)++) = VAR_2->transaction_id;
  if (VAR_3 & 1) {
    *((*VAR_1)++) = VAR_0 - VAR_2->status;
  }
  if (VAR_3 & 2) {
    *((*VAR_1)++) = VAR_2->created_at;
  }
}
