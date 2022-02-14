
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int token_type; } ;
struct TYPE_7__ {TYPE_1__ token; } ;
typedef TYPE_2__ parser_t ;



 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(parser_t *VAR_1) {
 FUNC_0(VAR_1->token.token_type, VAR_0,
     "Pair should start with string");
 if (FUNC_2(VAR_1)) {
  return 1;
 }
 switch (VAR_1->token.token_type) {
 case 128:
  if (FUNC_2(VAR_1)) {
   return 1;
  }
  return FUNC_1(VAR_1);
 default:
  return 1;
 }
}
