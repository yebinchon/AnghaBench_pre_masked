
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ptr; scalar_t__ type; scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ lex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,void*,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5 (char *VAR_3) {
  if (!VAR_2.lex.ptr || VAR_2.lex.ptr == (void *)-1 || VAR_2.lex.type == VAR_0 || VAR_2.lex.type == VAR_1 || VAR_2.lex.len != FUNC_4 (VAR_3) || FUNC_0 (VAR_3, VAR_2.lex.ptr, VAR_2.lex.len)) {
    static char VAR_4[1000];
    FUNC_3 (VAR_4, "Expected %s", VAR_3);
    FUNC_1 (VAR_4);
    return -1;
  } else {
    FUNC_2 ();
  }
  return 1;
}
