
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jvp_literal_number ;
typedef int decNumberUnit ;


 unsigned int VAR_0 ;
 int * FUNC_0 (int) ;

__attribute__((used)) static jvp_literal_number* FUNC_1(unsigned VAR_1) {


  int VAR_2 = ((VAR_1+VAR_0-1)/VAR_0);

  jvp_literal_number* VAR_3 = FUNC_0(
    sizeof(jvp_literal_number)
    + sizeof(decNumberUnit) * VAR_2
  );

  return VAR_3;
}
