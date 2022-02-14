
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (size_t) ;

char** FUNC_3(int VAR_3, char** VAR_4) {
  char** VAR_5;
  size_t VAR_6;
  char* VAR_7;
  int VAR_8;

  if (VAR_3 <= 0)
    return VAR_4;





  VAR_2 = VAR_4;
  VAR_1 = VAR_3;


  VAR_6 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    VAR_6 += FUNC_1(VAR_4[VAR_8]) + 1;


  VAR_6 += (VAR_3 + 1) * sizeof(char*);

  VAR_5 = FUNC_2(VAR_6);
  if (VAR_5 == ((void*)0))
    return VAR_4;
  VAR_0 = VAR_5;


  VAR_7 = (char*) &VAR_5[VAR_3 + 1];
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
    VAR_6 = FUNC_1(VAR_4[VAR_8]) + 1;
    FUNC_0(VAR_7, VAR_4[VAR_8], VAR_6);
    VAR_5[VAR_8] = VAR_7;
    VAR_7 += VAR_6;
  }
  VAR_5[VAR_8] = ((void*)0);

  return VAR_5;
}
