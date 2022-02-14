
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int cg_flags; int grbm_idx_mutex; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int,int,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_25, bool VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29 = 0;

 if (VAR_26 && (VAR_25->cg_flags & VAR_3)) {
  if (VAR_25->cg_flags & VAR_4) {
   if (VAR_25->cg_flags & VAR_2) {
    VAR_28 = VAR_27 = FUNC_0(VAR_19);
    VAR_27 |= VAR_13;
    if (VAR_28 != VAR_27)
     FUNC_1(VAR_19, VAR_27);
   }
  }

  VAR_28 = VAR_27 = FUNC_0(VAR_20);
  VAR_27 |= 0x00000001;
  VAR_27 &= 0xfffffffd;
  if (VAR_28 != VAR_27)
   FUNC_1(VAR_20, VAR_27);

  VAR_29 = FUNC_2(VAR_25);

  FUNC_5(&VAR_25->grbm_idx_mutex);
  FUNC_3(VAR_25, 0xffffffff, 0xffffffff, 0xffffffff);
  FUNC_1(VAR_23, 0xffffffff);
  FUNC_1(VAR_24, 0xffffffff);
  VAR_27 = VAR_15 |
   VAR_16;
  FUNC_1(VAR_22, VAR_27);
  FUNC_6(&VAR_25->grbm_idx_mutex);

  FUNC_4(VAR_25, VAR_29);

  if (VAR_25->cg_flags & VAR_0) {
   VAR_28 = VAR_27 = FUNC_0(VAR_18);
   VAR_27 &= ~VAR_11;
   VAR_27 |= (0x2 << VAR_12);
   VAR_27 |= VAR_10;
   VAR_27 &= ~VAR_9;
   if ((VAR_25->cg_flags & VAR_4) &&
       (VAR_25->cg_flags & VAR_1))
    VAR_27 &= ~VAR_5;
   VAR_27 &= ~VAR_7;
   VAR_27 |= VAR_6;
   VAR_27 |= (0x96 << VAR_8);
   if (VAR_28 != VAR_27)
    FUNC_1(VAR_18, VAR_27);
  }
 } else {
  VAR_28 = VAR_27 = FUNC_0(VAR_20);
  VAR_27 |= 0x00000003;
  if (VAR_28 != VAR_27)
   FUNC_1(VAR_20, VAR_27);

  VAR_27 = FUNC_0(VAR_21);
  if (VAR_27 & VAR_14) {
   VAR_27 &= ~VAR_14;
   FUNC_1(VAR_21, VAR_27);
  }

  VAR_27 = FUNC_0(VAR_19);
  if (VAR_27 & VAR_13) {
   VAR_27 &= ~VAR_13;
   FUNC_1(VAR_19, VAR_27);
  }

  VAR_28 = VAR_27 = FUNC_0(VAR_18);
  VAR_27 |= VAR_9 | VAR_5;
  if (VAR_28 != VAR_27)
   FUNC_1(VAR_18, VAR_27);

  VAR_29 = FUNC_2(VAR_25);

  FUNC_5(&VAR_25->grbm_idx_mutex);
  FUNC_3(VAR_25, 0xffffffff, 0xffffffff, 0xffffffff);
  FUNC_1(VAR_23, 0xffffffff);
  FUNC_1(VAR_24, 0xffffffff);
  VAR_27 = VAR_15 | VAR_17;
  FUNC_1(VAR_22, VAR_27);
  FUNC_6(&VAR_25->grbm_idx_mutex);

  FUNC_4(VAR_25, VAR_29);
 }
}
