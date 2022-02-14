
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ family; scalar_t__ usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_12, u8 VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16 = 2;

 if ((VAR_12->family == VAR_3) ||
     (VAR_12->family == VAR_4))
  VAR_16 = 4;
 else if (VAR_12->family == VAR_2)
  VAR_16 = 1;

 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
  if ((VAR_12->family == VAR_3) ||
      (VAR_12->family == VAR_4)) {
   FUNC_3(VAR_8, FUNC_1(VAR_14), ~VAR_10);
   FUNC_3(VAR_6, FUNC_1(VAR_14), ~VAR_10);
  } else {
   FUNC_3(VAR_7, FUNC_0(VAR_14), ~VAR_9);
   FUNC_3(VAR_5, FUNC_0(VAR_14), ~VAR_9);
  }
  for (VAR_15 = 0; VAR_15 < VAR_12->usec_timeout; VAR_15++) {
   if (((FUNC_2(VAR_11) & VAR_0) >> VAR_1) == VAR_13)
    break;
   FUNC_4(1);
  }
 }
}
