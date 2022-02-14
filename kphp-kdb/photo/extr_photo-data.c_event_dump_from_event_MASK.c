
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int type; } ;
typedef TYPE_1__ field_desc ;
struct TYPE_22__ {int type_id; int tn; char** tval; int* id; int* tp; int size; } ;
typedef TYPE_2__ event_dump ;
struct TYPE_23__ {int sn; } ;
typedef TYPE_3__ event ;
struct TYPE_24__ {TYPE_1__* fields; } ;


 double* FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 char* FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int* FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 long long* FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 char* FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (char*) ;





 char* FUNC_10 (char*,int) ;
 char* FUNC_11 (int ) ;
 TYPE_4__* VAR_0 ;

int FUNC_12 (event_dump *VAR_1, event *VAR_2, int VAR_3, event *VAR_4) {
  int VAR_5, VAR_6;

  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  FUNC_7 (VAR_1->type_id == VAR_3);





  field_desc *VAR_7 = VAR_0[VAR_3].fields;

  int VAR_8 = VAR_1->tn;

  for (VAR_5 = 0; VAR_5 < VAR_2->sn; VAR_5++) {
    if (FUNC_8 (VAR_2, VAR_5)) {
      char *VAR_9;
      int VAR_10 = 0, VAR_11 = 0;
      if (VAR_4 != ((void*)0) && FUNC_8 (VAR_4, VAR_5) && VAR_7[VAR_5].type != 128 && VAR_7[VAR_5].type != 129) {
        VAR_9 = FUNC_1 (VAR_4, &VAR_7[VAR_5]);
      } else {
        VAR_9 = VAR_1->tval[VAR_1->tn];
        VAR_10 = 1;
      }

      VAR_6 = VAR_8;
      switch (VAR_7[VAR_5].type) {
      case 131:
        *(int *)VAR_9 = *FUNC_2 (VAR_2, &VAR_7[VAR_5]);
        VAR_11 = sizeof (int);
        break;
      case 130:
        *(long long *)VAR_9 = *FUNC_3 (VAR_2, &VAR_7[VAR_5]);
        VAR_11 = sizeof (long long);
        break;
      case 132:
        *(double *)VAR_9 = *FUNC_0 (VAR_2, &VAR_7[VAR_5]);
        VAR_11 = sizeof (double);
        break;
      case 128:

        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
          if (VAR_1->id[VAR_6] == VAR_5) {
            break;
          }
        }

        if (VAR_6 == VAR_8) {
          *(char **)VAR_1->tval[VAR_1->tn] = FUNC_11 (FUNC_5 (VAR_2, &VAR_7[VAR_5]));
          VAR_11 = FUNC_9 (*(char **)VAR_1->tval[VAR_1->tn]) + 1;
        }
        break;
      case 129:
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
          if (VAR_1->id[VAR_6] == VAR_5) {
            break;
          }
        }

        if (VAR_6 == VAR_8) {
          char *VAR_12 = FUNC_4 (VAR_2, &VAR_7[VAR_5]);
          VAR_11 = FUNC_6 (VAR_12);
          *(char **)VAR_1->tval[VAR_1->tn] = FUNC_10 (VAR_12, VAR_11);
        }
        break;
      }
      if (VAR_10 && VAR_6 == VAR_8) {
        VAR_1->id[VAR_1->tn] = VAR_5;
        VAR_1->tp[VAR_1->tn] = VAR_7[VAR_5].type;
        VAR_1->size += VAR_11;
        VAR_1->tn++;
      }
    }
  }
  return 0;
}
