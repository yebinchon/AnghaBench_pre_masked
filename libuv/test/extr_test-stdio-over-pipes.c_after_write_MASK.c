
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(uv_write_t* VAR_2, int VAR_3) {
  if (VAR_3) {
    FUNC_1(VAR_1, "uv_write error: %s\n", FUNC_3(VAR_3));
    FUNC_0(0);
  }


  FUNC_2(VAR_2);

  VAR_0++;
}
