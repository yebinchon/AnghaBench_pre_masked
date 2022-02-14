
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v ;
typedef int buf ;
struct TYPE_2__ {unsigned long long volume_id; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long long* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long long*) ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (unsigned long long*,int,int,int ) ;
 int FUNC_5 (char*,int,char*,unsigned long long) ;
 int FUNC_6 (char*,char*,unsigned long long) ;
 char* FUNC_7 (char*) ;

char *FUNC_8 (void) {
  char VAR_3[32];
  if (VAR_2 <= 0) {
    return FUNC_7 ("");
  }
  int VAR_4, VAR_5 = 0, VAR_6 = 0;
  unsigned long long *VAR_7 = FUNC_1 (VAR_2, sizeof (VAR_7[0]));
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    VAR_7[VAR_4] = VAR_0[VAR_4+1]->volume_id;
  }
  FUNC_4 (VAR_7, VAR_2, sizeof (VAR_7[0]), VAR_1);
  for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
    if (VAR_7[VAR_4] != VAR_7[VAR_5]) {
      VAR_7[++VAR_5] = VAR_7[VAR_4];
    }
  }
  VAR_5++;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    int VAR_8 = FUNC_5 (VAR_3, sizeof (VAR_3), "%llu", VAR_7[VAR_4]);
    FUNC_0 (VAR_8 < sizeof (VAR_3));
    VAR_6 += VAR_8 + 1;
  }
  char *VAR_9 = FUNC_3 (VAR_6), *VAR_10 = VAR_9;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    if (VAR_4 > 0) {
      *VAR_10++ = ',';
    }
    VAR_10 += FUNC_6 (VAR_10, "%llu", VAR_7[VAR_4]);
  }
  FUNC_2 (VAR_7);
  FUNC_0 (VAR_10 == (VAR_9 + (VAR_6 - 1)));
  return VAR_9;
}
