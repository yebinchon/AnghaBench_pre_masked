
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_2, const uint8_t *VAR_3, mrb_irep *VAR_4, size_t *VAR_5)
{
  size_t VAR_6, VAR_7, VAR_8;

  *VAR_5 = 0;
  VAR_3 += sizeof(uint32_t);
  *VAR_5 += sizeof(uint32_t);
  VAR_7 = FUNC_1(VAR_3);
  VAR_3 += sizeof(uint16_t);
  *VAR_5 += sizeof(uint16_t);
  VAR_3 += VAR_7;
  *VAR_5 += VAR_7;

  VAR_8 = (size_t)FUNC_2(VAR_3);
  VAR_3 += sizeof(uint32_t);
  *VAR_5 += sizeof(uint32_t);

  if (FUNC_0(VAR_8, sizeof(uint16_t))) {
    return VAR_0;
  }
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
    VAR_3 += sizeof(uint16_t);
    *VAR_5 += sizeof(uint16_t);
  }

  return VAR_1;
}
