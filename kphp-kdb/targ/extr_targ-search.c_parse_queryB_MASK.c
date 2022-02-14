
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct query_keyword_descr {int flags; int minv; int maxv; scalar_t__ q_type; int * str; } ;
struct TYPE_6__ {int flags; int complexity; scalar_t__ type; int value2; int value; struct TYPE_6__* left; } ;
typedef TYPE_1__ query_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 struct query_keyword_descr* VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char FUNC_3 () ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,char**,int) ;

query_t *FUNC_6 (int VAR_8) {
  query_t *VAR_9, *VAR_10;
  int VAR_11, VAR_12, VAR_13;
  struct query_keyword_descr *VAR_14;
  if (FUNC_3() == '(') {
    VAR_2++;
    VAR_9 = FUNC_1 (VAR_8);
    if (!VAR_9) { return VAR_9; }
    while (*VAR_2 == ' ' || *VAR_2 == 9) { VAR_2++; }
    if (*VAR_2 != ')') { return 0; }
    VAR_2++;
    return VAR_9;
  }
  if (*VAR_2 == '!') {
    VAR_2++;
    VAR_9 = FUNC_6 (VAR_8);
    if (!VAR_9) { return 0; }
    VAR_9->flags ^= 1;
    return VAR_9;
  }
  VAR_11 = 0;
  if (*VAR_2 >= 'a' && *VAR_2 <= 'z') {
    while (VAR_11 <= 32 && ((*VAR_2 >= 'a' && *VAR_2 <= 'z') || *VAR_2 == '_' || (*VAR_2 >= '0' && *VAR_2 <= '9'))) {
      VAR_11++;
      VAR_2++;
    }
  }
  if (!VAR_11) { return 0; }
  VAR_2 -= VAR_11;
  for (VAR_14 = VAR_3; VAR_14->q_type; VAR_14++) {
    if ((VAR_14->flags & VAR_8) && !FUNC_4 (VAR_14->str, VAR_2, VAR_11) && !VAR_14->str[VAR_11]) {
      break;
    }
  }
  if (!VAR_14->q_type) { return 0; }
  VAR_2 += VAR_11;
  FUNC_3();
  VAR_13 = 0;

  if ((VAR_14->flags & 7) == 7) {
    if (VAR_2[0] != '.') { return 0; }
    VAR_2++;
    VAR_10 = FUNC_6 (VAR_14->minv);
    if (!VAR_10) { return 0; }
    VAR_9 = FUNC_0 (VAR_14->q_type, 0);
    if (!VAR_9) { return 0; }
    VAR_9->left = VAR_10;
    VAR_9->complexity = VAR_10->complexity * 4;
    return VAR_9;
  }

  if ((VAR_14->flags & 7) == 6) {
    if (VAR_2[0] != '.') { return 0; }
    VAR_2++;
    VAR_9 = FUNC_6 (VAR_14->minv);
    if (!VAR_9) { return 0; }
    return VAR_9;
  }

  if ((VAR_14->flags & 7) == 3) {
    if (*VAR_2 != '=') { return 0; }
    VAR_2++;
    FUNC_3();
    return FUNC_2 (VAR_4, VAR_14->q_type, VAR_14->minv);
  }

  if ((VAR_14->flags & 7) == 2) {
    VAR_9 = FUNC_0 (VAR_14->q_type, 0);
    if (VAR_9->type != VAR_7 && VAR_9->type != VAR_6) {
      VAR_9->complexity = 4;
    }
    return VAR_9;
  }

  if ((VAR_14->flags & 7) == 1 && (VAR_2[0] == '>' || VAR_2[0] == '<') && VAR_2[1] == '=') {
    VAR_13 = VAR_2[0];
    VAR_2++;
  }

  if (*VAR_2 != '=') {
    return 0;
  }
  VAR_2++;
  FUNC_3();

  char *VAR_15;
  VAR_12 = FUNC_5 (VAR_2, &VAR_15, 10);
  if (VAR_15 == VAR_2) {
    return 0;
  }
  if ((VAR_14->minv != -1 && VAR_12 < VAR_14->minv) || (VAR_14->maxv != -1 && VAR_12 > VAR_14->maxv)) {
    return 0;
  }
  VAR_2 = VAR_15;
  VAR_9 = FUNC_0 (VAR_14->q_type, VAR_12);
  if (!VAR_9) { return 0; }
  if ((VAR_14->flags & 7) == 1) {
    VAR_9->flags |= 16;
    VAR_9->value2 = VAR_12;
    if (VAR_13 == '<' && (VAR_12 != VAR_14->minv || VAR_12 == -1)) {
      VAR_9->value = (VAR_14->minv > 0 ? VAR_14->minv : VAR_1);
    }
    if (VAR_13 == '>' && (VAR_12 != VAR_14->maxv || VAR_12 == -1)) {
      VAR_9->value2 = VAR_0;
    }
    VAR_9->complexity = (VAR_9->value == VAR_1 || VAR_9->value2 == VAR_0 || VAR_9->value == VAR_9->value2 ? 1 : 2);
  } else {
    VAR_9->flags |= 8;
    VAR_9->complexity = (VAR_9->type == VAR_5 ? 4 : 1);
  }
  return VAR_9;
}
