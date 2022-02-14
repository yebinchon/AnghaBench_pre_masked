
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_2__ {int sp; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 char* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1 (hash_t VAR_6, char VAR_7) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    if (VAR_4[VAR_8] == VAR_6) {
      return VAR_8;
    }
  }
  if (VAR_8 == VAR_1) {
    return -1;
  }
  FUNC_0 (3, "add_query_word (%llx, %d)\n", VAR_6, (int) VAR_7);
  VAR_4[VAR_8] = VAR_6;
  VAR_3[VAR_8] = VAR_7;
  VAR_0[VAR_8].sp = -2;
  VAR_2[VAR_8] = 1;
  return VAR_5++;
}
