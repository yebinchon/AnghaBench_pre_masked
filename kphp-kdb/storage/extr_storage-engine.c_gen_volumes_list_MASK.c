
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volume_id; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (char*,int,char*,int ) ;
 char* VAR_2 ;
 int VAR_3 ;

int FUNC_1 (void) {
  int VAR_4 = 0;
  char *VAR_5 = VAR_2;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    int VAR_6 = VAR_2 + VAR_0 - VAR_5;
    if (VAR_6 <= 0) {
      return -1;
    }
    int VAR_7 = FUNC_0 (VAR_5, VAR_6, VAR_4 ? ",%lld" : "%lld", VAR_1[VAR_4]->volume_id);
    if (VAR_7 >= VAR_6) {
      return -2;
    }
    VAR_5 += VAR_7;
  }
  return VAR_5 - VAR_2;
}
