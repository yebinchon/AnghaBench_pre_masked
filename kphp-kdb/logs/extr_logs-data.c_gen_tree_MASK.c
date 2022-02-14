
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ token ;
struct TYPE_11__ {TYPE_1__ tok; } ;
typedef TYPE_2__ node ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_2__** FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_4 () ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (TYPE_2__**,TYPE_1__*,int*,int*,int ) ;

node *FUNC_6 (token *VAR_6) {
  if (VAR_6 == ((void*)0)) {
    return ((void*)0);
  }

  token *VAR_7 = VAR_6;
  while (VAR_7->type != VAR_2) {
    VAR_7++;
  }
  int VAR_8 = VAR_7 - VAR_6, VAR_9;

  int VAR_10 = VAR_8;

  node **VAR_11 = FUNC_3 (VAR_10 * sizeof (node *));
  token *VAR_12 = FUNC_2 (VAR_10 * sizeof (token));
  int VAR_13 = 0, VAR_14 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    if (FUNC_0(VAR_6[VAR_9].type)) {
      if (VAR_6[VAR_9].type == VAR_3) {
        VAR_12[VAR_14++] = VAR_6[VAR_9];
      } else {
        if (!FUNC_1(VAR_6[VAR_9].type) && !FUNC_5 (VAR_11, VAR_12, &VAR_13, &VAR_14, VAR_5[VAR_6[VAR_9].type])) {
          for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) { FUNC_0 (VAR_11[VAR_9]); } FUNC_0 (VAR_11, VAR_10 * sizeof (node *)); FUNC_0 (VAR_12, VAR_10 * sizeof (token)); return ((void*)0);
        }
        if (VAR_6[VAR_9].type == VAR_4) {
          if (!VAR_14 || VAR_12[VAR_14 - 1].type != VAR_3) {
            for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) { FUNC_0 (VAR_11[VAR_9]); } FUNC_0 (VAR_11, VAR_10 * sizeof (node *)); FUNC_0 (VAR_12, VAR_10 * sizeof (token)); return ((void*)0);
          }
          VAR_14--;
        } else {
          VAR_12[VAR_14++] = VAR_6[VAR_9];
        }
      }
    } else {
      VAR_11[VAR_13] = FUNC_4();
      VAR_11[VAR_13++]->tok = VAR_6[VAR_9];
    }
  }
  if (!FUNC_5 (VAR_11, VAR_12, &VAR_13, &VAR_14, VAR_5[VAR_4]) || VAR_13 != 1 || VAR_14) {
    for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) { FUNC_0 (VAR_11[VAR_9]); } FUNC_0 (VAR_11, VAR_10 * sizeof (node *)); FUNC_0 (VAR_12, VAR_10 * sizeof (token)); return ((void*)0);
  }
  node *VAR_15 = VAR_11[0];
  FUNC_0 (VAR_11, VAR_10 * sizeof (node *)); FUNC_0 (VAR_12, VAR_10 * sizeof (token));



  return VAR_15;
}
