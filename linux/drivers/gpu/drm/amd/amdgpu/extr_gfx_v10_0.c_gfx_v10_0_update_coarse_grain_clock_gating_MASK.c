
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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_14,
            bool VAR_15)
{
 uint32_t VAR_16, VAR_17;

 if (VAR_15 && (VAR_14->cg_flags & VAR_0)) {
  VAR_16 = VAR_17 = FUNC_0(VAR_4, 0, VAR_13);

  VAR_17 &= ~VAR_9;
  if (VAR_14->cg_flags & VAR_1)
   VAR_17 &= ~VAR_10;
  else
   VAR_17 |= VAR_10;

  if (VAR_16 != VAR_17)
   FUNC_1(VAR_4, 0, VAR_13, VAR_17);


  VAR_16 = FUNC_0(VAR_4, 0, VAR_12);
  VAR_17 = (0x36 << VAR_6) |
   VAR_5;
  if (VAR_14->cg_flags & VAR_1)
   VAR_17 |= (0x000F << VAR_8) |
    VAR_7;
  if (VAR_16 != VAR_17)
   FUNC_1(VAR_4, 0, VAR_12, VAR_17);


  VAR_16 = FUNC_0(VAR_4, 0, VAR_11);
  VAR_17 = (0x0100 << VAR_3) |
   (0x0090 << VAR_2);
  if (VAR_16 != VAR_17)
   FUNC_1(VAR_4, 0, VAR_11, VAR_17);
 } else {
  VAR_16 = VAR_17 = FUNC_0(VAR_4, 0, VAR_12);

  VAR_17 &= ~(VAR_5 | VAR_7);

  if (VAR_16 != VAR_17)
   FUNC_1(VAR_4, 0, VAR_12, VAR_17);
 }
}
