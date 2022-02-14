
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ type_desc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2 (type_desc *VAR_3, char *VAR_4) {
  if (!VAR_4[0]) {
    return 0;
  }

  int VAR_5 = 0, VAR_6, VAR_7 = 0;
  for (VAR_6 = VAR_5; (VAR_6 == 0 || VAR_4[VAR_6 - 1] == ',') && VAR_7 < VAR_1; VAR_5 = ++VAR_6) {
    while (VAR_4[VAR_6] != ',' && VAR_4[VAR_6]) {
      VAR_6++;
    }

    VAR_2[VAR_7] = FUNC_0 (VAR_3, VAR_4 + VAR_5, VAR_6 - VAR_5);
    if (VAR_2[VAR_7] < 0) {
      if ((!FUNC_1 (VAR_4 + VAR_5, "location", 8) || !FUNC_1 (VAR_4 + VAR_5, "original_location", 17)) && VAR_3->name[0] == 'p') {
        int VAR_8 = 0;
        if (VAR_4[VAR_5] == 'o') {
          VAR_5 += 9;
          VAR_8 = 128;
        }

        if (VAR_6 - VAR_5 == 8) {
          VAR_2[VAR_7++] = VAR_0 + VAR_8;
        } else {
          if (VAR_6 - VAR_5 > 26 + 8 + 1) {
            return -1;
          }
          VAR_5 += 8;
          int VAR_9 = VAR_6, VAR_10 = 0;
          if ('0' <= VAR_4[VAR_9 - 1] && VAR_4[VAR_9 - 1] <= '3') {
            VAR_9--;
            VAR_10 = VAR_4[VAR_9] - '0';
          }
          if (VAR_5 == VAR_9) {
            return -1;
          }
          while (VAR_5 != VAR_9 && VAR_7 < VAR_1) {
            if (VAR_4[VAR_5] < 'a' || VAR_4[VAR_5] > 'z') {
              return -1;
            }
            VAR_2[VAR_7++] = VAR_0 + VAR_8 + (VAR_4[VAR_5++] - 'a' + 1) + (VAR_10 << 5);
          }
        }
      } else if (VAR_6 - VAR_5 == 8 && !FUNC_1 (VAR_4 + VAR_5, "ordering", 8)) {
        VAR_2[VAR_7++] = VAR_0 + 256;
      } else {
        return -1;
      }
    } else {
      VAR_7++;
    }
  }
  return VAR_7;
}
