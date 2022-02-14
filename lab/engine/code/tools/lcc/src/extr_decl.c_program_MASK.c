
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 () ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_12 ;

void FUNC_5(void) {
 int VAR_13;

 VAR_10 = VAR_3;
 for (VAR_13 = 0; VAR_11 != VAR_1; VAR_13++)
  if (VAR_9[VAR_11] == VAR_0 || VAR_9[VAR_11] == VAR_5
  || VAR_11 == VAR_4 || VAR_11 == '*' || VAR_11 == '(') {
   FUNC_1(VAR_7);
   FUNC_0(VAR_6);
   if (!(VAR_8 >= 3 || VAR_12))
   FUNC_0(VAR_2);
  } else if (VAR_11 == ';') {
   FUNC_4("empty declaration\n");
   VAR_11 = FUNC_3();
  } else {
   FUNC_2("unrecognized declaration\n");
   VAR_11 = FUNC_3();
  }
 if (VAR_13 == 0)
  FUNC_4("empty input file\n");
}
