
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (size_t,size_t,size_t*,int *) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(size_t VAR_0, size_t* VAR_1, uint8_t* VAR_2) {
  if (VAR_0 == 0) {
    FUNC_0(1, 0, VAR_1, VAR_2);
  } else {
    size_t VAR_3 = FUNC_1(VAR_0);
    FUNC_0(1, 1, VAR_1, VAR_2);
    FUNC_0(3, VAR_3, VAR_1, VAR_2);
    FUNC_0(VAR_3, VAR_0 - ((size_t)1 << VAR_3), VAR_1, VAR_2);
  }
}
