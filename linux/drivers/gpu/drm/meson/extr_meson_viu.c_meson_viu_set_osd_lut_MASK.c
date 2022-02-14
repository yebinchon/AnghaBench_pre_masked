
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;
typedef enum viu_lut_sel_e { ____Placeholder_viu_lut_sel_e } viu_lut_sel_e ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct meson_drm *VAR_10, enum viu_lut_sel_e VAR_11,
        unsigned int *VAR_12, unsigned int *VAR_13,
        unsigned int *VAR_14, bool VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 if (VAR_11 == VAR_2) {
  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
  VAR_18 = VAR_4;
 } else if (VAR_11 == VAR_3) {
  VAR_16 = VAR_8;
  VAR_17 = VAR_9;
  VAR_18 = VAR_7;
 } else
  return;

 if (VAR_11 == VAR_3) {
  FUNC_2(0, VAR_10->io_base + FUNC_1(VAR_16));

  for (VAR_19 = 0; VAR_19 < (VAR_1 / 2); VAR_19++)
   FUNC_2(VAR_12[VAR_19 * 2] | (VAR_12[VAR_19 * 2 + 1] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  FUNC_2(VAR_12[VAR_1 - 1] | (VAR_13[0] << 16),
   VAR_10->io_base + FUNC_1(VAR_17));

  for (VAR_19 = 0; VAR_19 < (VAR_1 / 2); VAR_19++)
   FUNC_2(VAR_13[VAR_19 * 2 + 1] | (VAR_13[VAR_19 * 2 + 2] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  for (VAR_19 = 0; VAR_19 < (VAR_1 / 2); VAR_19++)
   FUNC_2(VAR_14[VAR_19 * 2] | (VAR_14[VAR_19 * 2 + 1] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  FUNC_2(VAR_14[VAR_1 - 1],
   VAR_10->io_base + FUNC_1(VAR_17));

  if (VAR_15)
   FUNC_3(0x7 << 29, 7 << 29,
         VAR_10->io_base + FUNC_1(VAR_18));
  else
   FUNC_3(0x7 << 29, 0,
         VAR_10->io_base + FUNC_1(VAR_18));
 } else if (VAR_11 == VAR_2) {
  FUNC_2(0, VAR_10->io_base + FUNC_1(VAR_16));

  for (VAR_19 = 0; VAR_19 < (VAR_0 / 2); VAR_19++)
   FUNC_2(VAR_12[VAR_19 * 2] | (VAR_12[VAR_19 * 2 + 1] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  FUNC_2(VAR_12[VAR_0 - 1] | (VAR_13[0] << 16),
   VAR_10->io_base + FUNC_1(VAR_17));

  for (VAR_19 = 0; VAR_19 < (VAR_0 / 2); VAR_19++)
   FUNC_2(VAR_13[VAR_19 * 2 + 1] | (VAR_13[VAR_19 * 2 + 2] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  for (VAR_19 = 0; VAR_19 < (VAR_0 / 2); VAR_19++)
   FUNC_2(VAR_14[VAR_19 * 2] | (VAR_14[VAR_19 * 2 + 1] << 16),
    VAR_10->io_base + FUNC_1(VAR_17));

  FUNC_2(VAR_14[VAR_0 - 1],
   VAR_10->io_base + FUNC_1(VAR_17));

  if (VAR_15)
   FUNC_3(7 << 27, 7 << 27,
         VAR_10->io_base + FUNC_1(VAR_18));
  else
   FUNC_3(7 << 27, 0,
         VAR_10->io_base + FUNC_1(VAR_18));

  FUNC_3(FUNC_0(31), FUNC_0(31),
        VAR_10->io_base + FUNC_1(VAR_18));
 }
}
