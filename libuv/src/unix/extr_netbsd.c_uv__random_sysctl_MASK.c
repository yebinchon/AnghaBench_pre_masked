
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;


 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int*,int ,unsigned char*,size_t*,int *,int ) ;

int FUNC_3(void* VAR_2, size_t VAR_3) {
  static int VAR_4[] = {129, 128};
  size_t VAR_5, VAR_6;
  unsigned char* VAR_7;

  VAR_7 = VAR_2;
  while (VAR_3) {
    VAR_6 = VAR_3 < 32 ? VAR_3 : 32;
    VAR_5 = VAR_6;

    if (FUNC_2(VAR_4, FUNC_0(VAR_4), VAR_7, &VAR_5, ((void*)0), 0) == -1)
      return FUNC_1(VAR_1);

    if (VAR_5 != VAR_6)
      return VAR_0;

    VAR_7 += VAR_5;
    VAR_3 -= VAR_5;
  }

  return 0;
}
