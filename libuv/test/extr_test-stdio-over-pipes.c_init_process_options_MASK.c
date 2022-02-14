
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_exit_cb ;
struct TYPE_2__ {char* file; char** args; int exit_cb; } ;


 int FUNC_0 (int) ;
 char** VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,size_t*) ;

__attribute__((used)) static void FUNC_2(char* VAR_4, uv_exit_cb VAR_5) {
  int VAR_6 = FUNC_1(VAR_1, &VAR_2);
  FUNC_0(VAR_6 == 0);
  VAR_1[VAR_2] = '\0';
  VAR_0[0] = VAR_1;
  VAR_0[1] = VAR_4;
  VAR_0[2] = ((void*)0);
  VAR_3.file = VAR_1;
  VAR_3.args = VAR_0;
  VAR_3.exit_cb = VAR_5;
}
