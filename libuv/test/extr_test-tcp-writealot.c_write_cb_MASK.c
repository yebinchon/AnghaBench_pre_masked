
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_3 ;
 char* FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(uv_write_t* VAR_5, int VAR_6) {
  FUNC_0(VAR_5 != ((void*)0));

  if (VAR_6) {
    FUNC_1(VAR_3, "uv_write error: %s\n", FUNC_2(VAR_6));
    FUNC_0(0);
  }

  VAR_2 += VAR_0 * VAR_1;
  VAR_4++;
}
