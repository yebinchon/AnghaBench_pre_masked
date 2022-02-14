
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int flags; scalar_t__ last_seen; scalar_t__ stacklen; int next; } ;
typedef char* pfunc ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static pfunc FUNC_2(struct jv_parser* VAR_3, jv VAR_4) {
  if ((VAR_3->flags & VAR_2)) {
    if (FUNC_1(VAR_3->next) || VAR_3->last_seen == VAR_1) {
      FUNC_0(VAR_4);
      return "Expected separator between values";
    }
    if (VAR_3->stacklen > 0)
      VAR_3->last_seen = VAR_1;
    else
      VAR_3->last_seen = VAR_0;
  } else {
    if (FUNC_1(VAR_3->next)) {
      FUNC_0(VAR_4);
      return "Expected separator between values";
    }
  }
  FUNC_0(VAR_3->next);
  VAR_3->next = VAR_4;
  return 0;
}
