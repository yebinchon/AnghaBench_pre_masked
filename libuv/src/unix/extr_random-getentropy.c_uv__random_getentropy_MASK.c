
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(void* VAR_4, size_t VAR_5) {
  size_t VAR_6;
  size_t VAR_7;

  FUNC_2(&VAR_2, VAR_3);

  if (&FUNC_1 == ((void*)0))
    return VAR_0;


  for (VAR_6 = 0, VAR_7 = 256; VAR_6 + VAR_7 < VAR_5; VAR_6 += VAR_7)
    if (FUNC_1((char *) VAR_4 + VAR_6, VAR_7))
      return FUNC_0(VAR_1);

  if (FUNC_1((char *) VAR_4 + VAR_6, VAR_5 - VAR_6))
    return FUNC_0(VAR_1);

  return 0;
}
