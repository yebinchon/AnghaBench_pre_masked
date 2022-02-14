
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct malidp_hw_device {int dummy; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int ** VAR_5 ;
 int FUNC_2 (struct malidp_hw_device*,int,int) ;

__attribute__((used)) static void FUNC_3(struct malidp_hw_device *VAR_6,
        u32 VAR_7,
        u16 VAR_8,
        u8 VAR_9)
{
 int VAR_10;
 u16 VAR_11 = VAR_0 + VAR_4;

 FUNC_2(VAR_6,
   VAR_7 | (VAR_8 & VAR_2),
   VAR_11 + VAR_1);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); ++VAR_10)
  FUNC_2(VAR_6, FUNC_1(
    VAR_5[VAR_9][VAR_10]),
    VAR_11 + VAR_3);
}
