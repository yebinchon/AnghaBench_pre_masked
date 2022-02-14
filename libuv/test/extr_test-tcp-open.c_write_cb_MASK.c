
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(uv_write_t* VAR_2, int VAR_3) {
  FUNC_0(VAR_2 != ((void*)0));

  if (VAR_3) {
    FUNC_1(VAR_0, "uv_write error: %s\n", FUNC_2(VAR_3));
    FUNC_0(0);
  }

  VAR_1++;
}
