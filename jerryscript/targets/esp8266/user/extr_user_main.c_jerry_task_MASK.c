
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int portTickType ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const) ;

__attribute__((used)) static void FUNC_5(void *VAR_1) {
  if (FUNC_0() == 0) {
    const portTickType VAR_2 = 100 / VAR_0;
    uint32_t VAR_3 = 0;

    for (;;) {
      FUNC_4(VAR_2);
      FUNC_2(VAR_3);
      if (!VAR_3) {
        FUNC_3(4);
      }
      VAR_3++;
    }
  }
  FUNC_1();
}
