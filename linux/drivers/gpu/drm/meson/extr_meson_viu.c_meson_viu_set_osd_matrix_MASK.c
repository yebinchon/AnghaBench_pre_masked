
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;
typedef enum viu_matrix_sel_e { ____Placeholder_viu_matrix_sel_e } viu_matrix_sel_e ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_drm *VAR_16,
         enum viu_matrix_sel_e VAR_17,
         int *VAR_18, bool VAR_19)
{
 if (VAR_17 == VAR_0) {

  FUNC_2(((VAR_18[0] & 0xfff) << 16) | (VAR_18[1] & 0xfff),
   VAR_16->io_base + FUNC_1(VAR_14));
  FUNC_2(VAR_18[2] & 0xfff,
   VAR_16->io_base + FUNC_1(VAR_15));
  FUNC_2(((VAR_18[3] & 0x1fff) << 16) | (VAR_18[4] & 0x1fff),
   VAR_16->io_base + FUNC_1(VAR_3));
  FUNC_2(((VAR_18[5] & 0x1fff) << 16) | (VAR_18[6] & 0x1fff),
   VAR_16->io_base + FUNC_1(VAR_4));
  FUNC_2(((VAR_18[7] & 0x1fff) << 16) | (VAR_18[8] & 0x1fff),
   VAR_16->io_base + FUNC_1(VAR_5));
  FUNC_2(((VAR_18[9] & 0x1fff) << 16) | (VAR_18[10] & 0x1fff),
   VAR_16->io_base + FUNC_1(VAR_6));

  if (VAR_18[21]) {
   FUNC_2(((VAR_18[11] & 0x1fff) << 16) | (VAR_18[12] & 0x1fff),
    VAR_16->io_base +
     FUNC_1(VAR_7));
   FUNC_2(((VAR_18[13] & 0x1fff) << 16) | (VAR_18[14] & 0x1fff),
    VAR_16->io_base +
     FUNC_1(VAR_8));
   FUNC_2(((VAR_18[15] & 0x1fff) << 16) | (VAR_18[16] & 0x1fff),
    VAR_16->io_base +
     FUNC_1(VAR_9));
   FUNC_2(VAR_18[17] & 0x1fff, VAR_16->io_base +
    FUNC_1(VAR_10));
  } else
   FUNC_2((VAR_18[11] & 0x1fff) << 16, VAR_16->io_base +
    FUNC_1(VAR_7));

  FUNC_2(((VAR_18[18] & 0xfff) << 16) | (VAR_18[19] & 0xfff),
   VAR_16->io_base + FUNC_1(VAR_12));
  FUNC_2(VAR_18[20] & 0xfff,
   VAR_16->io_base + FUNC_1(VAR_13));

  FUNC_3(3 << 30, VAR_18[21] << 30,
   VAR_16->io_base + FUNC_1(VAR_10));
  FUNC_3(7 << 16, VAR_18[22] << 16,
   VAR_16->io_base + FUNC_1(VAR_10));


  FUNC_3(FUNC_0(0), VAR_19 ? FUNC_0(0) : 0,
   VAR_16->io_base + FUNC_1(VAR_11));
  FUNC_3(FUNC_0(1), 0,
   VAR_16->io_base + FUNC_1(VAR_11));
 } else if (VAR_17 == VAR_1) {
  int VAR_20;


  for (VAR_20 = 0; VAR_20 < 5; VAR_20++)
   FUNC_2(((VAR_18[VAR_20 * 2] & 0x1fff) << 16) |
    (VAR_18[VAR_20 * 2 + 1] & 0x1fff), VAR_16->io_base +
    FUNC_1(VAR_2 + VAR_20 + 1));

  FUNC_3(FUNC_0(30), VAR_19 ? FUNC_0(30) : 0,
   VAR_16->io_base + FUNC_1(VAR_2));
  FUNC_3(FUNC_0(31), VAR_19 ? FUNC_0(31) : 0,
   VAR_16->io_base + FUNC_1(VAR_2));
 }
}
