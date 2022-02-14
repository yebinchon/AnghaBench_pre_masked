
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ useconds_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(int VAR_2, char** VAR_3){
 useconds_t VAR_4, VAR_5;
 double VAR_6;

 if (VAR_2 != 2) {
  FUNC_2("Usage: randsleep <max_microseconds>\n");
  FUNC_0(2);
 }

 VAR_1 = 0;
 VAR_4 = (useconds_t)FUNC_5(VAR_3[1], ((void*)0), 0);
 if (VAR_1 != 0) {
  FUNC_1("strtol");
  FUNC_0(1);
 }
 FUNC_4();
 VAR_6 = (double)FUNC_3() / (double)VAR_0;
 VAR_5 = (useconds_t)((double)VAR_4 * VAR_6);
 FUNC_6(VAR_5);

 return (0);
}
