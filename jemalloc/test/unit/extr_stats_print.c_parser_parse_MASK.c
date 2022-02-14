
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int token_type; } ;
struct TYPE_6__ {TYPE_2__ token; } ;
typedef TYPE_1__ parser_t ;



 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_4(parser_t *VAR_0) {
 if (FUNC_2(VAR_0)) {
  goto label_error;
 }
 if (FUNC_1(VAR_0)) {
  goto label_error;
 }

 if (FUNC_2(VAR_0)) {
  goto label_error;
 }
 switch (VAR_0->token.token_type) {
 case 128:
  return 0;
 default:
  goto label_error;
 }
 FUNC_0();

label_error:
 FUNC_3(&VAR_0->token);
 return 1;
}
