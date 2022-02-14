
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rm_so; size_t rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int regex_t ;
typedef TYPE_2__* pc_t ;
struct TYPE_10__ {int re_nsub; } ;
struct TYPE_9__ {TYPE_3__* re; TYPE_1__* groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,char*,size_t,TYPE_1__*,int ) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char const*,size_t) ;
 char* FUNC_9 (char const*,size_t) ;
 int FUNC_10 (char const*,int *,int ) ;

int FUNC_11(pc_t VAR_2, const char *VAR_3, size_t VAR_4,
    char **VAR_5, int *VAR_6, int *VAR_7) {
  if (!VAR_2->re) {
    VAR_2->re = FUNC_2(sizeof(regex_t));
    if (FUNC_5(VAR_2->re,
          "^[ \t]*"
          "(([a-fA-F0-9-]{25,}|\\*|null)[ \t]*:?|:)"
          "[ \t]*(-?[0-9]+)"
          "([ \t]*-[ \t]*([0-9]+))?"
          "[ \t]*$", VAR_0 | VAR_1)) {
      FUNC_4("Internal error: bad regex?");
      return -1;
    }
    size_t VAR_8 = VAR_2->re->re_nsub + 1;
    VAR_2->groups = FUNC_0(VAR_8, sizeof(regmatch_t));
  }
  size_t VAR_9 = VAR_2->re->re_nsub + 1;
  regmatch_t *VAR_10 = VAR_2->groups;
  char *VAR_11 = FUNC_0(VAR_4+1, sizeof(char));
  FUNC_3(VAR_11, VAR_3, VAR_4);
  int VAR_12 = FUNC_6(VAR_2->re, VAR_11, VAR_9, VAR_10, 0);
  FUNC_1(VAR_11);
  if (VAR_12) {
    return -1;
  }
  char *VAR_13;
  if (VAR_10[2].rm_so >= 0) {
    size_t VAR_14 = VAR_10[2].rm_eo - VAR_10[2].rm_so;
    if (FUNC_8("null", VAR_3 + VAR_10[2].rm_so, VAR_14)) {
      VAR_13 = FUNC_9(VAR_3 + VAR_10[2].rm_so, VAR_14);
    } else {
      VAR_13 = ((void*)0);
    }
  } else {
    VAR_13 = FUNC_7("*");
  }
  int VAR_15 = FUNC_10(VAR_3 + VAR_10[3].rm_so, ((void*)0), 0);
  int VAR_16 = VAR_15;
  if (VAR_10[4].rm_so >= 0 && VAR_10[5].rm_so >= 0) {
    VAR_16 = FUNC_10(VAR_3 + VAR_10[5].rm_so, ((void*)0), 0);
  }
  *VAR_5 = VAR_13;
  *VAR_6 = VAR_15;
  *VAR_7 = VAR_16;
  return 0;
}
