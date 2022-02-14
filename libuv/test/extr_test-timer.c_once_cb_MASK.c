
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(uv_timer_t* VAR_2) {
  FUNC_1("ONCE_CB %d\n", VAR_0);

  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(0 == FUNC_4((uv_handle_t*) VAR_2));

  VAR_0++;

  FUNC_2((uv_handle_t*)VAR_2, VAR_1);


  FUNC_5(FUNC_3());
}
