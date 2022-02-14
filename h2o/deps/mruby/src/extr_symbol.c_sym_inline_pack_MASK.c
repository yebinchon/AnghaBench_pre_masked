
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int mrb_sym ;


 char const* VAR_0 ;
 char* FUNC_0 (char const*,int) ;

__attribute__((used)) static mrb_sym
FUNC_1(const char *VAR_1, uint16_t VAR_2)
{
  char VAR_3;
  const char *VAR_4;
  int VAR_5;
  mrb_sym VAR_6 = 0;
  int VAR_7 = 1;

  if (VAR_2 > 6) return 0;
  for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
    uint32_t VAR_8;

    VAR_3 = VAR_1[VAR_5];
    if (VAR_3 == 0) return 0;
    VAR_4 = FUNC_0(VAR_0, (int)VAR_3);
    if (VAR_4 == 0) return 0;
    VAR_8 = (uint32_t)(VAR_4 - VAR_0)+1;
    if (VAR_8 > 27) VAR_7 = 0;
    VAR_6 |= VAR_8<<(VAR_5*6+2);
  }
  if (VAR_7) {
    VAR_6 = 0;
    for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
      uint32_t VAR_9;

      VAR_3 = VAR_1[VAR_5];
      VAR_4 = FUNC_0(VAR_0, (int)VAR_3);
      VAR_9 = (uint32_t)(VAR_4 - VAR_0)+1;
      VAR_6 |= VAR_9<<(VAR_5*5+2);
    }
    return VAR_6 | 3;
  }
  if (VAR_2 == 6) return 0;
  return VAR_6 | 1;
}
