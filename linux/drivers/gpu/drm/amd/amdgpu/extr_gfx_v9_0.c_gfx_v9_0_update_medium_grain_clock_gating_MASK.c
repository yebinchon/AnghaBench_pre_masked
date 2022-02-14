
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; scalar_t__ asic_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_16,
            bool VAR_17)
{
 uint32_t VAR_18, VAR_19;

 FUNC_2(VAR_16);


 if (VAR_17 && (VAR_16->cg_flags & VAR_1)) {

  VAR_19 = VAR_18 = FUNC_0(VAR_6, 0, VAR_14);

  if (VAR_16->asic_type != VAR_4)
   VAR_18 &= ~VAR_7;

  VAR_18 &= ~(VAR_10 |
     VAR_8 |
     VAR_9);


  VAR_18 |= VAR_11;

  if (VAR_19 != VAR_18)
   FUNC_1(VAR_6, 0, VAR_14, VAR_18);


  if (VAR_16->cg_flags & VAR_2) {

   if (VAR_16->cg_flags & VAR_3) {
    VAR_19 = VAR_18 = FUNC_0(VAR_6, 0, VAR_15);
    VAR_18 |= VAR_12;
    if (VAR_19 != VAR_18)
     FUNC_1(VAR_6, 0, VAR_15, VAR_18);
   }

   if (VAR_16->cg_flags & VAR_0) {
    VAR_19 = VAR_18 = FUNC_0(VAR_6, 0, VAR_13);
    VAR_18 |= VAR_5;
    if (VAR_19 != VAR_18)
     FUNC_1(VAR_6, 0, VAR_13, VAR_18);
   }
  }
 } else {

  VAR_19 = VAR_18 = FUNC_0(VAR_6, 0, VAR_14);

  if (VAR_16->asic_type != VAR_4)
   VAR_18 |= VAR_7;

  VAR_18 |= (VAR_11 |
    VAR_10 |
    VAR_8 |
    VAR_9);

  if (VAR_19 != VAR_18)
   FUNC_1(VAR_6, 0, VAR_14, VAR_18);


  VAR_18 = FUNC_0(VAR_6, 0, VAR_15);
  if (VAR_18 & VAR_12) {
   VAR_18 &= ~VAR_12;
   FUNC_1(VAR_6, 0, VAR_15, VAR_18);
  }


  VAR_18 = FUNC_0(VAR_6, 0, VAR_13);
  if (VAR_18 & VAR_5) {
   VAR_18 &= ~VAR_5;
   FUNC_1(VAR_6, 0, VAR_13, VAR_18);
  }
 }

 FUNC_3(VAR_16);
}
