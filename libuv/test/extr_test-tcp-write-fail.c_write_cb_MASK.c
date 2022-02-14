
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_write_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(uv_write_t* VAR_3, int VAR_4) {
  FUNC_0(VAR_3 != ((void*)0));

  FUNC_0(VAR_4 != 0);
  FUNC_1(VAR_1, "uv_write error: %s\n", FUNC_3(VAR_4));
  VAR_2++;

  FUNC_2((uv_handle_t*)(VAR_3->handle), VAR_0);
}
