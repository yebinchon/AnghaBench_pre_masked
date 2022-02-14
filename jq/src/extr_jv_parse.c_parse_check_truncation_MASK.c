
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int flags; scalar_t__ stackpos; scalar_t__ tokenpos; int next; int last_ch_was_ws; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct jv_parser* VAR_2) {
  return ((VAR_2->flags & VAR_1) && !VAR_2->last_ch_was_ws && (VAR_2->stackpos > 0 || VAR_2->tokenpos > 0 || FUNC_0(VAR_2->next) == VAR_0));
}
