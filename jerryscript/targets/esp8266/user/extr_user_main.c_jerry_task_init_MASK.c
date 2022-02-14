
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int length; scalar_t__ source; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void) {
  VAR_0;

  FUNC_0();


  FUNC_3(2);
  for (int VAR_2 = 1; VAR_1[VAR_2].source; VAR_2++) {
    int VAR_3 = FUNC_1(VAR_1[VAR_2].source, VAR_1[VAR_2].length);
    if (VAR_3 != 0) {
      FUNC_2("js_eval failed code(%d) [%s]\r\n", VAR_3, VAR_1[VAR_2].name);
      return -1;
    }
  }


  int VAR_4 = FUNC_1(VAR_1[0].source, VAR_1[0].length);
  if (VAR_4 != 0) {
    FUNC_2("js_eval failed code(%d) [%s]\r\n", VAR_4, VAR_1[0].name);
    return -2;
  }
  FUNC_3(3);
  return 0;
}
