
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rite_binary_header {int binary_size; int binary_crc; int binary_ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(const uint8_t *VAR_7, size_t *VAR_8, uint16_t *VAR_9, uint8_t *VAR_10)
{
  const struct rite_binary_header *VAR_11 = (const struct rite_binary_header *)VAR_7;

  if (FUNC_3(VAR_11->binary_ident, VAR_5, sizeof(VAR_11->binary_ident)) == 0) {
    if (FUNC_0())
      *VAR_10 |= VAR_2;
    else
      *VAR_10 |= VAR_0;
  }
  else if (FUNC_3(VAR_11->binary_ident, VAR_6, sizeof(VAR_11->binary_ident)) == 0) {
    if (FUNC_0())
      *VAR_10 |= VAR_1;
    else
      *VAR_10 |= VAR_2;
  }
  else {
    return VAR_3;
  }

  if (VAR_9) {
    *VAR_9 = FUNC_1(VAR_11->binary_crc);
  }
  *VAR_8 = (size_t)FUNC_2(VAR_11->binary_size);

  return VAR_4;
}
