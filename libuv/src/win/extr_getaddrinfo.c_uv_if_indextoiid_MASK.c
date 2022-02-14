
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,unsigned int) ;
 int FUNC_1 (int) ;

int FUNC_2(unsigned int VAR_2, char* VAR_3, size_t* VAR_4) {
  int VAR_5;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || *VAR_4 == 0)
    return VAR_0;

  VAR_5 = FUNC_0(VAR_3, *VAR_4, "%d", VAR_2);

  if (VAR_5 < 0)
    return FUNC_1(VAR_5);

  if (VAR_5 >= (int) *VAR_4) {
    *VAR_4 = VAR_5 + 1;
    return VAR_1;
  }

  *VAR_4 = VAR_5;
  return 0;
}
