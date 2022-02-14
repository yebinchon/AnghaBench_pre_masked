
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_drm *VAR_10,
        int *VAR_11, bool VAR_12)
{

 FUNC_2(((VAR_11[0] & 0xfff) << 16) | (VAR_11[1] & 0xfff),
  VAR_10->io_base + FUNC_1(VAR_8));
 FUNC_2(VAR_11[2] & 0xfff,
  VAR_10->io_base + FUNC_1(VAR_9));
 FUNC_2(((VAR_11[3] & 0x1fff) << 16) | (VAR_11[4] & 0x1fff),
  VAR_10->io_base + FUNC_1(VAR_0));
 FUNC_2(((VAR_11[5] & 0x1fff) << 16) | (VAR_11[6] & 0x1fff),
  VAR_10->io_base + FUNC_1(VAR_1));
 FUNC_2(((VAR_11[7] & 0x1fff) << 16) | (VAR_11[8] & 0x1fff),
  VAR_10->io_base + FUNC_1(VAR_2));
 FUNC_2(((VAR_11[9] & 0x1fff) << 16) | (VAR_11[10] & 0x1fff),
  VAR_10->io_base + FUNC_1(VAR_3));
 FUNC_2((VAR_11[11] & 0x1fff) << 16,
  VAR_10->io_base + FUNC_1(VAR_4));

 FUNC_2(((VAR_11[18] & 0xfff) << 16) | (VAR_11[19] & 0xfff),
  VAR_10->io_base + FUNC_1(VAR_6));
 FUNC_2(VAR_11[20] & 0xfff,
  VAR_10->io_base + FUNC_1(VAR_7));

 FUNC_3(FUNC_0(0), VAR_12 ? FUNC_0(0) : 0,
  VAR_10->io_base + FUNC_1(VAR_5));
}
