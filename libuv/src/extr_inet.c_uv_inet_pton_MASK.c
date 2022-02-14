
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,void*) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

int FUNC_4(int VAR_3, const char* VAR_4, void* VAR_5) {
  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
    return VAR_1;

  switch (VAR_3) {
  case 129:
    return (FUNC_0(VAR_4, VAR_5));
  case 128: {
    int VAR_6;
    char VAR_7[VAR_2], *VAR_8, *VAR_9;
    VAR_8 = (char*) VAR_4;
    VAR_9 = FUNC_3(VAR_4, '%');
    if (VAR_9 != ((void*)0)) {
      VAR_8 = VAR_7;
      VAR_6 = VAR_9 - VAR_4;
      if (VAR_6 > VAR_2-1)
        return VAR_1;
      FUNC_2(VAR_8, VAR_4, VAR_6);
      VAR_8[VAR_6] = '\0';
    }
    return FUNC_1(VAR_8, VAR_5);
  }
  default:
    return VAR_0;
  }

}
