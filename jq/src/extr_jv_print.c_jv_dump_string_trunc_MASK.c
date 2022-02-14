
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;

char *FUNC_5(jv VAR_0, char *VAR_1, size_t VAR_2) {
  VAR_0 = FUNC_0(VAR_0,0);
  const char* VAR_3 = FUNC_2(VAR_0);
  const size_t VAR_4 = FUNC_3(VAR_3);
  FUNC_4(VAR_1, VAR_3, VAR_2);
  VAR_1[VAR_2 - 1] = 0;
  if (VAR_4 > VAR_2 - 1 && VAR_2 >= 4) {

    VAR_1[VAR_2 - 2]='.';
    VAR_1[VAR_2 - 3]='.';
    VAR_1[VAR_2 - 4]='.';
  }
  FUNC_1(VAR_0);
  return VAR_1;
}
