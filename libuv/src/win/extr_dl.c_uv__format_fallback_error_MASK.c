
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int errmsg; } ;
typedef TYPE_1__ uv_lib_t ;
typedef int LPSTR ;
typedef scalar_t__ DWORD_PTR ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const*,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(uv_lib_t* VAR_3, int VAR_4){
  static const CHAR VAR_5[] = "error: %1!d!";
  DWORD_PTR VAR_6[1];
  VAR_6[0] = (DWORD_PTR) VAR_4;

  FUNC_0(VAR_2 |
                 VAR_1 |
                 VAR_0,
                 VAR_5, 0, 0,
                 (LPSTR) &VAR_3->errmsg,
                 0, (va_list*) VAR_6);
}
