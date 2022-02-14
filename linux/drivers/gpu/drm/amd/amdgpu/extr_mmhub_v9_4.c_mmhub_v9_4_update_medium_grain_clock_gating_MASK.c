
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int cg_flags; } ;


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
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_14,
       bool VAR_15)
{
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;
 int VAR_22 = VAR_13 - VAR_12;

 for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
  VAR_16 = VAR_17 = FUNC_0(VAR_8, 0,
     VAR_11,
     VAR_20 * VAR_9);

  if (VAR_15 && (VAR_14->cg_flags & VAR_0))
   VAR_17 |= VAR_1;
  else
   VAR_17 &= ~VAR_1;

  if (VAR_16 != VAR_17)
   FUNC_1(VAR_8, 0, VAR_11,
    VAR_20 * VAR_9, VAR_17);

  for (VAR_21 = 0; VAR_21 < 5; VAR_21++) {
   VAR_18 = VAR_19 = FUNC_0(VAR_8, 0,
     VAR_12,
     VAR_20 * VAR_9 +
     VAR_21 * VAR_22);
   if (VAR_15 &&
       (VAR_14->cg_flags & VAR_0)) {
    VAR_19 &=
        ~(VAR_6 |
        VAR_7 |
        VAR_2 |
        VAR_3 |
        VAR_5 |
        VAR_4);
   } else {
    VAR_19 |=
        (VAR_6 |
        VAR_7 |
        VAR_2 |
        VAR_3 |
        VAR_5 |
        VAR_4);
   }

   if (VAR_18 != VAR_19)
    FUNC_1(VAR_8, 0,
     VAR_12,
     VAR_20 * VAR_9 +
     VAR_21 * VAR_22, VAR_19);

   if (VAR_20 == 1 && VAR_21 == 3)
    break;
  }
 }
}
