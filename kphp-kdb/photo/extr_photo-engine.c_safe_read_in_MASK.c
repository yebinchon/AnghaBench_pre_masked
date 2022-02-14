
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netbuffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static inline void FUNC_2 (netbuffer_t *VAR_0, char *VAR_1, int VAR_2) {
  FUNC_0 (FUNC_1 (VAR_0, VAR_1, VAR_2) == VAR_2);
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1[VAR_3] == 0) {
      VAR_1[VAR_3] = ' ';
    }
  }
  VAR_1[VAR_2] = 0;
}
