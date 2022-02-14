
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_5(unsigned int VAR_4)
{
 uint32_t VAR_5;
 unsigned long VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_4 == VAR_1[VAR_7])
   break;
 }
 if (VAR_7 == 3)
  return 0;

 FUNC_2(&VAR_3, VAR_6);
 VAR_5 = FUNC_4(FUNC_0(VAR_7));
 FUNC_3(&VAR_3, VAR_6);
 for (VAR_7 = VAR_0 - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_5 >> (VAR_7 + 16))
   break;
 }
 return FUNC_1(VAR_2,
   (irq_hw_number_t)VAR_7);
}
