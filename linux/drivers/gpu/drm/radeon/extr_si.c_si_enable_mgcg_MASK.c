
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int cg_flags; } ;


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
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_11,
      bool VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_12 && (VAR_11->cg_flags & VAR_6)) {
  VAR_14 = VAR_13 = FUNC_0(VAR_0);
  VAR_13 = 0x96940200;
  if (VAR_14 != VAR_13)
   FUNC_1(VAR_0, VAR_13);

  if (VAR_11->cg_flags & VAR_5) {
   VAR_14 = VAR_13 = FUNC_0(VAR_2);
   VAR_13 |= VAR_1;
   if (VAR_14 != VAR_13)
    FUNC_1(VAR_2, VAR_13);
  }

  VAR_14 = VAR_13 = FUNC_0(VAR_7);
  VAR_13 &= 0xffffffc0;
  if (VAR_14 != VAR_13)
   FUNC_1(VAR_7, VAR_13);

  VAR_15 = FUNC_2(VAR_11);

  FUNC_1(VAR_9, 0xffffffff);
  FUNC_1(VAR_10, 0xffffffff);
  FUNC_1(VAR_8, 0x00d000ff);

  FUNC_3(VAR_11, VAR_15);
 } else {
  VAR_14 = VAR_13 = FUNC_0(VAR_7);
  VAR_13 |= 0x00000003;
  if (VAR_14 != VAR_13)
   FUNC_1(VAR_7, VAR_13);

  VAR_13 = FUNC_0(VAR_2);
  if (VAR_13 & VAR_1) {
   VAR_13 &= ~VAR_1;
   FUNC_1(VAR_2, VAR_13);
  }
  VAR_14 = VAR_13 = FUNC_0(VAR_0);
  VAR_13 |= VAR_3 | VAR_4;
  if (VAR_14 != VAR_13)
   FUNC_1(VAR_0, VAR_13);

  VAR_15 = FUNC_2(VAR_11);

  FUNC_1(VAR_9, 0xffffffff);
  FUNC_1(VAR_10, 0xffffffff);
  FUNC_1(VAR_8, 0x00e000ff);

  FUNC_3(VAR_11, VAR_15);
 }
}
