
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,scalar_t__) ;
 char* FUNC_1 (int *,int const,scalar_t__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (size_t,int *) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_1, uint8_t **VAR_2, mrb_sym const *VAR_3, uint32_t VAR_4)
{
  uint8_t *VAR_5 = *VAR_2;
  uint32_t VAR_6;
  const char *VAR_7;
  mrb_int VAR_8;

  VAR_5 += FUNC_3(VAR_4, VAR_5);

  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
    VAR_7 = FUNC_1(VAR_1, VAR_3[VAR_6], &VAR_8);
    VAR_5 += FUNC_2((uint16_t)VAR_8, VAR_5);
    FUNC_0(VAR_5, VAR_7, VAR_8);
    VAR_5 += VAR_8;
  }

  *VAR_2 = VAR_5;

  return VAR_0;
}
