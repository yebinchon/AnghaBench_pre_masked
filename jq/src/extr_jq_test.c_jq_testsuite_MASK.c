
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int *,int,int) ;
 int * VAR_0 ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(jv VAR_1, int VAR_2, int VAR_3, char* VAR_4[]) {
  FILE *VAR_5 = VAR_0;
  int VAR_6 = -1;
  int VAR_7 = -1;
  FUNC_3();
  if (VAR_3 > 0) {
    for(int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      if (!FUNC_6(VAR_4[VAR_8], "--skip")) {
        VAR_6 = FUNC_0(VAR_4[VAR_8+1]);
        VAR_8++;
      } else if (!FUNC_6(VAR_4[VAR_8], "--take")) {
        VAR_7 = FUNC_0(VAR_4[VAR_8+1]);
        VAR_8++;
      } else {
        VAR_5 = FUNC_2(VAR_4[VAR_8], "r");
        if (!VAR_5) {
          FUNC_4("fopen");
          FUNC_1(1);
        }
      }
    }
  }
  FUNC_5(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7);
  return 0;
}
