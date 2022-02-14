
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,size_t) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(char* VAR_6, size_t VAR_7) {
  size_t VAR_8;
  if (VAR_6 == ((void*)0) || VAR_7 == 0)
    return VAR_0;

  FUNC_4(&VAR_5, VAR_2);
  FUNC_2(&VAR_4);

  VAR_8 = FUNC_1(VAR_3[0]);
  if (VAR_7 <= VAR_8) {
    FUNC_3(&VAR_4);
    return VAR_1;
  }

  FUNC_0(VAR_6, VAR_3[0], VAR_8);
  VAR_6[VAR_8] = '\0';

  FUNC_3(&VAR_4);

  return 0;
}
