
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int token_type_t ;
struct TYPE_3__ {size_t pos; size_t len; size_t line; size_t col; int token_type; int * parser; } ;
typedef TYPE_1__ token_t ;
typedef int parser_t ;



__attribute__((used)) static void
FUNC_0(token_t *VAR_0, parser_t *VAR_1, token_type_t VAR_2,
    size_t VAR_3, size_t VAR_4, size_t VAR_5, size_t VAR_6) {
 VAR_0->parser = VAR_1;
 VAR_0->token_type = VAR_2;
 VAR_0->pos = VAR_3;
 VAR_0->len = VAR_4;
 VAR_0->line = VAR_5;
 VAR_0->col = VAR_6;
}
