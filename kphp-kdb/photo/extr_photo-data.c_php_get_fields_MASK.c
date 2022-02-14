
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* fields; } ;
typedef TYPE_2__ type_desc ;
struct TYPE_8__ {int v_fid; int type; char* v_string; int v_string_len; int v_int; int v_long; int v_double; } ;
struct TYPE_6__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (char*,char*,int*,int*) ;
 int FUNC_3 (char*) ;



 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

int FUNC_4 (int VAR_7, char *VAR_8) {
  type_desc *VAR_9 = &VAR_6[VAR_7];
  int VAR_10;
  int VAR_11 = FUNC_3 (VAR_8);
  int VAR_12;
  VAR_3 = -1;
  if (FUNC_2 (VAR_8, "a:%d%n", &VAR_10, &VAR_12) != 1 || VAR_8[VAR_12] != ':' || VAR_8[VAR_12 + 1] != '{' || VAR_8[VAR_11 - 1] != '}' || VAR_10 < 0 || VAR_10 > VAR_1 || VAR_11 >= VAR_0) {
    return -1;
  }
  int VAR_13, VAR_14 = VAR_12 + 2;

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
    int VAR_15;
    if (FUNC_2 (VAR_8 + VAR_14, "s:%d%n", &VAR_15, &VAR_12) != 1 || VAR_8[VAR_14 + VAR_12] != ':' || VAR_8[VAR_14 + VAR_12 + 1] != '"') {
      return -1;
    }
    VAR_14 += VAR_12 + 2;

    if (VAR_14 + 3 + VAR_15 >= VAR_11) {
      return -1;
    }

    int VAR_16 = FUNC_1 (VAR_9, VAR_8 + VAR_14, VAR_15);

    if (VAR_16 < 0) {
      return -1;
    }

    VAR_2[VAR_13].v_fid = VAR_16;
    int VAR_17 = VAR_2[VAR_13].type = VAR_9->fields[VAR_16].type;


    if (VAR_17 == VAR_4) {
      return -1;
    }

    VAR_14 += VAR_15;

    if (VAR_8[VAR_14++] != '"') {
      return -1;
    }
    if (VAR_8[VAR_14++] != ';') {
      return -1;
    }

    if (VAR_8[VAR_14] != 's' && VAR_8[VAR_14] != 'i' && VAR_8[VAR_14] != 'd') {
      return -1;
    }

    int VAR_18;
    if (VAR_8[VAR_14] == 's') {
      VAR_18 = 1;
      VAR_14++;
      if (FUNC_2 (VAR_8 + VAR_14, ":%d%n", &VAR_15, &VAR_12) != 1 || VAR_8[VAR_14 + VAR_12] != ':') {
        return -1;
      }
      VAR_14 += VAR_12;

      if (VAR_14 + VAR_15 + 2 >= VAR_11) {
        return -1;
      }
    } else {
      VAR_18 = 0;
      VAR_14++;
    }

    if (VAR_8[VAR_14++] != ':') {
      return -1;
    }

    if (VAR_18) {
      if (VAR_8[VAR_14++] != '"') {
        return -1;
      }
    }

    int VAR_19 = 0;
    if (VAR_17 == VAR_5) {
      if (!VAR_18) {
        VAR_15 = 0;
        if (VAR_14 + VAR_15 + 1 < VAR_11 && VAR_8[VAR_14 + VAR_15] != ';') {
          VAR_15++;
        }
      }

      VAR_2[VAR_13].v_string = VAR_8 + VAR_14;
      VAR_2[VAR_13].v_string_len = VAR_15;

      VAR_19 = VAR_15;
    } else {
      switch (VAR_17) {
        case 129:
          if (FUNC_2 (VAR_8 + VAR_14, "%d%n", &VAR_2[VAR_13].v_int, &VAR_19) != 1) {
            return -1;
          }
          break;
        case 128:
          if (FUNC_2 (VAR_8 + VAR_14, "%lld%n", &VAR_2[VAR_13].v_long, &VAR_19) != 1) {
            return -1;
          }
          break;
        case 130:
          if (FUNC_2 (VAR_8 + VAR_14, "%lf%n", &VAR_2[VAR_13].v_double, &VAR_19) != 1) {
            return -1;
          }
          break;
        default:
          FUNC_0 (0);
      }
    }

    VAR_14 += VAR_19;

    if (VAR_18) {
      if (VAR_19 != VAR_15) {
        return -1;
      }

      if (VAR_8[VAR_14++] != '"') {
        return -1;
      }
    }

    if (VAR_8[VAR_14++] != ';') {
      return -1;
    }
  }

  if (VAR_14 != VAR_11 - 1) {
    return -1;
  }
  return VAR_3 = VAR_10;
}
