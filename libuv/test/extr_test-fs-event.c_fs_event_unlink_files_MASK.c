
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,void (*) (int *),int,int ) ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_3) {
  int VAR_4;
  int VAR_5;


  if (VAR_3 == ((void*)0)) {

    for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
      VAR_4 = FUNC_2(FUNC_1(VAR_5));
      if (VAR_3 != ((void*)0))
        FUNC_0(VAR_4 == 0);
    }
  } else {

    FUNC_0(VAR_1 < VAR_0);


    FUNC_0(0 == FUNC_2(FUNC_1(VAR_1)));

    if (++VAR_1 < VAR_0) {


      FUNC_0(0 == FUNC_3(&VAR_2, FUNC_4, 1, 0));
    }
  }
}
