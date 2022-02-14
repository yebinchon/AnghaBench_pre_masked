
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int array_object_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (array_object_id_t *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (FUNC_2(VAR_1-VAR_4) < VAR_2) {
      FUNC_1 (VAR_0 + VAR_5*VAR_3, VAR_0 + VAR_4*VAR_3, VAR_3 * 4);
      VAR_5++;
      if (!--VAR_2) {
        return VAR_5;
      }
    }
  }
  FUNC_0 (!VAR_2);
  return VAR_5;
}
