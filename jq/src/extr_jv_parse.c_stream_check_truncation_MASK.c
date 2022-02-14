
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {scalar_t__ stacklen; int next; } ;
typedef scalar_t__ jv_kind ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct jv_parser* VAR_4) {
  jv_kind VAR_5 = FUNC_0(VAR_4->next);
  return (VAR_4->stacklen > 0 || VAR_5 == VAR_2 || VAR_5 == VAR_3 || VAR_5 == VAR_0 || VAR_5 == VAR_1);
}
