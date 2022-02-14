
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_6,
          bool VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (VAR_7 && (VAR_6->cg_flags & VAR_5)) {
  for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
   if (VAR_11 == 0)
    VAR_10 = VAR_0;
   else
    VAR_10 = VAR_1;
   VAR_8 = VAR_9 = FUNC_0(VAR_3 + VAR_10);
   VAR_9 &= ~VAR_4;
   if (VAR_9 != VAR_8)
    FUNC_1(VAR_3 + VAR_10, VAR_9);
   FUNC_1(VAR_2 + VAR_10, 0x00000100);
  }
 } else {
  for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
   if (VAR_11 == 0)
    VAR_10 = VAR_0;
   else
    VAR_10 = VAR_1;
   VAR_8 = VAR_9 = FUNC_0(VAR_3 + VAR_10);
   VAR_9 |= VAR_4;
   if (VAR_9 != VAR_8)
    FUNC_1(VAR_3 + VAR_10, VAR_9);

   VAR_8 = VAR_9 = FUNC_0(VAR_2 + VAR_10);
   VAR_9 = 0xff000000;
   if (VAR_9 != VAR_8)
    FUNC_1(VAR_2 + VAR_10, VAR_9);
  }
 }
}
