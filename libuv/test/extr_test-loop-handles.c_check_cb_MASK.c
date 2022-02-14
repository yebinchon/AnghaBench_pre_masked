
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;
typedef int uv_check_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(uv_check_t* VAR_18) {
  int VAR_19, VAR_20;

  FUNC_2(VAR_17, "%s", "CHECK_CB\n");
  FUNC_1(VAR_17);
  FUNC_0(VAR_18 == &VAR_4);

  if (VAR_12 < VAR_1) {

    for (VAR_19 = 0; VAR_19 < 1 + (VAR_12 % VAR_0); VAR_19++) {
      VAR_20 = FUNC_4(&VAR_7[VAR_19], VAR_5);
      FUNC_0(VAR_20 == 0);
      VAR_11++;
    }

  } else {

    FUNC_3((uv_handle_t*)&VAR_14, VAR_13);
    FUNC_3((uv_handle_t*)&VAR_4, VAR_3);
    FUNC_3((uv_handle_t*)&VAR_16, VAR_15);

    for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
      FUNC_3((uv_handle_t*)&VAR_7[VAR_19], VAR_6);
    }



    if (VAR_10) {
      FUNC_3((uv_handle_t*)&VAR_9, VAR_8);
    }
  }

  VAR_2++;
}
