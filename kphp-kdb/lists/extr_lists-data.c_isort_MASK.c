
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_object_id_t ;
typedef int array_object_id_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3 (array_object_id_t *VAR_3, int VAR_4) {
  int VAR_5, VAR_6;
  var_object_id_t VAR_7, VAR_8;
  if (VAR_4 <= 0) { return; }
  VAR_5 = 0; VAR_6 = VAR_4;



  VAR_7 = FUNC_0 (VAR_3, VAR_4 >> 1);

  do {
    while (FUNC_2 (FUNC_0 (VAR_3, VAR_5), VAR_7)) { VAR_5++; }
    while (FUNC_2 (VAR_7, FUNC_0 (VAR_3, VAR_6))) { VAR_6--; }
    if (VAR_5 <= VAR_6) {





      if (VAR_0) {
        VAR_8 = VAR_3[2*VAR_5]; VAR_3[2*VAR_5] = VAR_3[2*VAR_6]; VAR_3[2*VAR_6] = VAR_8;
        VAR_8 = VAR_3[2*VAR_5+1]; VAR_3[2*VAR_5+1] = VAR_3[2*VAR_6+1]; VAR_3[2*VAR_6] = VAR_8;
      } else {
        VAR_8 = VAR_3[VAR_5]; VAR_3[VAR_5] = VAR_3[VAR_6]; VAR_3[VAR_6] = VAR_8;
      }

      VAR_5++;
      VAR_6--;
    }
  } while (VAR_5 <= VAR_6);
  FUNC_3 (VAR_3, VAR_6);



  FUNC_3 (VAR_3+VAR_5, VAR_4-VAR_5);

}
