
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ field_desc ;
struct TYPE_8__ {int type_id; int* id; int* tp; char** tval; size_t tn; int size; } ;
typedef TYPE_2__ event_dump ;
typedef int event ;
struct TYPE_9__ {TYPE_1__* fields; } ;


 char* FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;



 int VAR_1 ;

 char* FUNC_6 (char*) ;
 TYPE_3__* VAR_2 ;

int FUNC_7 (event_dump *VAR_3, char *VAR_4, int VAR_5, event *VAR_6) {
  FUNC_1 (VAR_3->type_id == VAR_5);

  static const char VAR_7 = 1;

  char *VAR_8 = VAR_4;

  int VAR_9[VAR_0], VAR_10 = 0;
  char *VAR_11[VAR_0];

  int VAR_12 = 0, VAR_13, VAR_14;
  int VAR_15 = FUNC_5 (VAR_8);
  VAR_8[VAR_15 + 1] = 0;
  while (VAR_8[VAR_12]) {
    if (VAR_10 == VAR_0) {
      return -1;
    }

    VAR_13 = VAR_12;
    while (VAR_8[VAR_13] != ':' && VAR_8[VAR_13]) {
      VAR_13++;
    }
    if (VAR_8[VAR_13] != ':') {
      return -1;
    }

    VAR_8[VAR_13] = 0;

    int VAR_16 = FUNC_2 (&VAR_2[VAR_5], VAR_8 + VAR_12, VAR_13 - VAR_12);

    if (VAR_16 < 0) {
      return -1;
    }

    VAR_3->id[VAR_10] = VAR_16;

    VAR_14 = ++VAR_13;
    while (VAR_8[VAR_14] != VAR_7 && VAR_8[VAR_14]) {
      VAR_14++;
    }
    VAR_8[VAR_14] = 0;

    VAR_3->tp[VAR_10] = VAR_2[VAR_5].fields[VAR_16].type;


    if (VAR_3->tp[VAR_10] == VAR_1) {
      return -1;
    }

    VAR_9[VAR_10] = VAR_14 - VAR_13;
    VAR_11[VAR_10++] = VAR_8 + VAR_13;


    VAR_12 = VAR_14 + 1;
  }

  field_desc *VAR_17 = VAR_2[VAR_5].fields;


  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
    char *VAR_18;
    int VAR_19 = 0;
    if (VAR_6 != ((void*)0) && FUNC_3 (VAR_6, VAR_3->id[VAR_12]) && VAR_3->tp[VAR_12] != 128) {
      VAR_18 = FUNC_0 (VAR_6, &VAR_17[VAR_3->id[VAR_12]]);
    } else {
      VAR_18 = VAR_3->tval[VAR_3->tn];
      VAR_19 = 1;
    }
    int VAR_20, VAR_21 = 0;
    switch (VAR_3->tp[VAR_12]) {
    case 130:
      if (FUNC_4 (VAR_11[VAR_12], "%d%n", (int *)VAR_18, &VAR_20) != 1 || VAR_20 != VAR_9[VAR_12]) {
        return -1;
      }
      VAR_21 = 4;
      break;
    case 129:
      if (FUNC_4 (VAR_11[VAR_12], "%lld%n", (long long *)VAR_18, &VAR_20) != 1 || VAR_20 != VAR_9[VAR_12]) {
        return -1;
      }
      VAR_21 = 8;
      break;
    case 131:
      if (FUNC_4 (VAR_11[VAR_12], "%lf%n", (double *)VAR_18, &VAR_20) != 1 || VAR_20 != VAR_9[VAR_12]) {
        return -1;
      }
      VAR_21 = 8;
      break;
    case 128:
      *(char **)VAR_18 = FUNC_6 (VAR_11[VAR_12]);
      VAR_21 = VAR_9[VAR_12] + 1;
      break;
    default:
      FUNC_1 (0);
    }
    if (VAR_19) {
      VAR_3->tp[VAR_3->tn] = VAR_3->tp[VAR_12];
      VAR_3->id[VAR_3->tn] = VAR_3->id[VAR_12];
      VAR_3->size += VAR_21;
      VAR_3->tn++;
    }
  }



  return 0;
}
