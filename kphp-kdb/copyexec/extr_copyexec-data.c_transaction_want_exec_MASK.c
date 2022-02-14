
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int mask; int result; } ;
typedef TYPE_1__ transaction_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline int FUNC_0 (transaction_t *VAR_7) {
  if (VAR_7->status == VAR_6) {
    return 0;
  }
  if (VAR_7->status == VAR_4) {
    return 1;
  }

  if (VAR_7->status == VAR_3) {
    if (VAR_7->mask & VAR_0) {
      return 1;
    }
    if (VAR_7->result == (((int) VAR_1) << 8) || VAR_7->result == (((int) VAR_2) << 8)) {
      return 1;
    }
    return 0;
  }

  return (VAR_7->status == VAR_5) && (VAR_7->mask & VAR_0);
}
