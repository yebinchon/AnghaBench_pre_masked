
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 scalar_t__* VAR_5 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_6,
          unsigned VAR_7)
{
 unsigned VAR_8;
 unsigned VAR_9;
 unsigned VAR_10 = 0;

 if (VAR_7 >= FUNC_0(VAR_5)) {
  FUNC_1("invalid dig_fe %d\n", VAR_7);
  return;
 }

 VAR_8 = FUNC_2(VAR_2 +
        VAR_5[VAR_7]);
 if (!(VAR_8 & VAR_3)) {
  FUNC_1("dig %d , should be enable\n", VAR_7);
  return;
 }

 VAR_8 &=~VAR_3;
 FUNC_3(VAR_2 +
        VAR_5[VAR_7], VAR_8);

 VAR_8 = FUNC_2(VAR_2 +
        VAR_5[VAR_7]);
 while (VAR_10 < 32 && VAR_8 & VAR_4) {
  FUNC_4(1);
  VAR_10++;
  VAR_8 = FUNC_2(VAR_2 +
         VAR_5[VAR_7]);
 }
 if (VAR_10 >= 32 )
  FUNC_1("counter exceeds %d\n", VAR_10);

 VAR_9 = FUNC_2(VAR_0 + VAR_5[VAR_7]);
 VAR_9 |= VAR_1;
 FUNC_3(VAR_0 + VAR_5[VAR_7], VAR_9);

}
