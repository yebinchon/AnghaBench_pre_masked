
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (char const* const,unsigned long long,int *) ;
 unsigned long long FUNC_2 (char const* const,unsigned long long) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long FUNC_3 (char const* const) ;

int FUNC_4 (const char* const VAR_3) {
  unsigned long long VAR_4, VAR_5 = -1;
  switch (VAR_0) {
    case 129:
      VAR_4 = FUNC_2(VAR_3, FUNC_3(VAR_3));
      break;
    case 130:
      VAR_4 = FUNC_1(VAR_3, FUNC_3(VAR_3), ((void*)0));
      break;
    case 128:
      for (VAR_5 = 0; VAR_3[VAR_5] && VAR_3[VAR_5] != '.'; VAR_5++)
        ;
      VAR_4 = FUNC_2(VAR_3, VAR_5);
      break;
    default:
      FUNC_0("unknown split mode!" && 0);
  }
  return VAR_4 % VAR_1 == VAR_2 ? 0 : -1;
}
