
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* name; int type; } ;
typedef TYPE_1__ field_desc ;
typedef int event ;
struct TYPE_11__ {int dyn; int * obj; } ;
typedef TYPE_2__ actual_object ;
struct TYPE_12__ {TYPE_1__* fields; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,TYPE_1__*) ;
 int* FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 char* FUNC_4 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (char,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (char*,int *,int) ;
 int VAR_2 ;





 int VAR_3 ;
 TYPE_3__* VAR_4 ;

inline int FUNC_14 (actual_object *VAR_5, char *VAR_6, int VAR_7, int VAR_8) {
  if (VAR_8 == VAR_1) {
    VAR_3++;
  }

  event *VAR_9 = VAR_5->obj == (event *)VAR_0 ? ((void*)0) : VAR_5->obj, *VAR_10 = VAR_9;
  event *VAR_11 = FUNC_8 (VAR_10, VAR_5->dyn, VAR_8);

  if (0) {
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < 63; VAR_12++) {
      if (!FUNC_12 (VAR_11, VAR_12)) {
        continue;
      }

      field_desc *VAR_13 = &VAR_4[VAR_8].fields[VAR_12];
      FUNC_9 (VAR_2, "%15s: ", VAR_13->name);

      switch (VAR_13->type) {
        case 131:
          FUNC_9 (VAR_2, "%d", *FUNC_1(VAR_11, VAR_13));
          break;
        case 130:
          FUNC_9 (VAR_2, "%d", *FUNC_2(VAR_11, VAR_13));
          break;
        case 132:
          FUNC_9 (VAR_2, "%.6d", *FUNC_0(VAR_11, VAR_13));
          break;
        case 128: {
          char *VAR_14 = FUNC_4(VAR_11, VAR_13);
          while (*VAR_14) {
            switch (*VAR_14) {
              case '\t':
              case '\n':
              case '\\':
                FUNC_10 ('\\', VAR_2);
              default:
                FUNC_10 (*VAR_14++, VAR_2);
            }
          }
          break;
        }
        case 129:
          FUNC_9 (VAR_2, "%d", FUNC_5 (FUNC_3 (VAR_11, VAR_13)));
          break;
        default:
          FUNC_6 (0);
      }
      FUNC_9 (VAR_2, "\n");
    }
    FUNC_9 (VAR_2, "\n");
  }

  int VAR_15 = FUNC_11 (VAR_11);
  FUNC_6 (VAR_15 <= VAR_7);
  FUNC_13 (VAR_6, VAR_11, VAR_15);

  if (VAR_11 != VAR_10) {
    FUNC_7 (VAR_11);
  }
  if (VAR_10 != VAR_9) {
    FUNC_7 (VAR_10);
  }
  return VAR_15;
}
