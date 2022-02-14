
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_prepare_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(uv_prepare_t* VAR_7) {
  int VAR_8;

  FUNC_2(VAR_6, "%s", "PREPARE_1_CB\n");
  FUNC_1(VAR_6);
  FUNC_0(VAR_7 == &VAR_3);

  if (VAR_1 % 2 == 0) {
    VAR_8 = FUNC_4(&VAR_5, VAR_4);
    FUNC_0(VAR_8 == 0);
  }

  VAR_2++;
  VAR_1++;

  FUNC_3("Loop iteration %d of %d.\n", VAR_1, VAR_0);
}
