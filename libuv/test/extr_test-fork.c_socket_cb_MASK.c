
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_poll_t ;
typedef int uv_handle_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(uv_poll_t* VAR_5, int VAR_6, int VAR_7) {
  ssize_t VAR_8;
  VAR_1++;
  FUNC_0(0 == VAR_6);
  FUNC_1("Socket cb got events %d\n", VAR_7);
  FUNC_0(VAR_0 == (VAR_7 & VAR_0));
  if (VAR_3) {
    VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_4);
    FUNC_0(VAR_8 == VAR_4);
  }
  FUNC_3((uv_handle_t*) VAR_5, ((void*)0));
}
