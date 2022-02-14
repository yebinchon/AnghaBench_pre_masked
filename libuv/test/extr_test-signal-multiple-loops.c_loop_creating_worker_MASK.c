
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_signal_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_10(void* VAR_5) {
  (void) VAR_5;

  do {
    uv_loop_t *VAR_6;
    uv_signal_t VAR_7;
    int VAR_8;

    VAR_6 = FUNC_3(sizeof(*VAR_6));
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_0(0 == FUNC_6(VAR_6));

    VAR_8 = FUNC_8(VAR_6, &VAR_7);
    FUNC_0(VAR_8 == 0);

    VAR_8 = FUNC_9(&VAR_7, VAR_3, VAR_0);
    FUNC_0(VAR_8 == 0);

    FUNC_4((uv_handle_t*) &VAR_7, ((void*)0));

    VAR_8 = FUNC_7(VAR_6, VAR_1);
    FUNC_0(VAR_8 == 0);

    FUNC_5(VAR_6);
    FUNC_1(VAR_6);

    FUNC_2(&VAR_2);
  } while (!VAR_4);
}
