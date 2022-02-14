
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_9,
      bool VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_2);
 u32 VAR_12;
 int VAR_13;

 if (VAR_10)
  VAR_11 |= (VAR_0 | VAR_1);
 else
  VAR_11 &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_2, VAR_11);

 if (!VAR_10) {

  VAR_11 = FUNC_0(VAR_3);

  VAR_12 = VAR_7 | VAR_6 | VAR_4 | VAR_5;
  for (VAR_13 = 0; VAR_13 < VAR_9->usec_timeout; VAR_13++) {
   if ((FUNC_0(VAR_8) & VAR_12) == (VAR_4 | VAR_6))
    break;
   FUNC_2(1);
  }
 }
}
