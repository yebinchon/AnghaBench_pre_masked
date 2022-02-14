
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_idle_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(uv_idle_t* VAR_7) {
  int VAR_8;

  FUNC_2(VAR_6, "%s", "IDLE_1_CB\n");
  FUNC_1(VAR_6);

  FUNC_0(VAR_7 != ((void*)0));
  FUNC_0(VAR_5 > 0);


  if (!VAR_4 && !FUNC_7((uv_handle_t*)&VAR_3)) {
    VAR_8 = FUNC_4(FUNC_3(), &VAR_3);
    FUNC_0(VAR_8 == 0);
    VAR_8 = FUNC_5(&VAR_3, VAR_1);
    FUNC_0(VAR_8 == 0);
    VAR_4 = 1;
    VAR_2++;
  }

  VAR_0++;

  if (VAR_0 % 5 == 0) {
    VAR_8 = FUNC_6((uv_idle_t*)VAR_7);
    FUNC_0(VAR_8 == 0);
    VAR_5--;
  }
}
