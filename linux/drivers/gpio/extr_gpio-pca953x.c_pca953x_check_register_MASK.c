
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pca953x_chip {int driver_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pca953x_chip*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct pca953x_chip*) ;

__attribute__((used)) static bool FUNC_3(struct pca953x_chip *VAR_3, unsigned int VAR_4,
       u32 VAR_5)
{
 int VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = (VAR_4 & VAR_2) >> VAR_6;
 int VAR_8 = VAR_4 & (FUNC_0(VAR_6) - 1);


 if (VAR_4 & VAR_1) {
  if (!(VAR_3->driver_data & VAR_0))
   return 0;
  VAR_7 += 8;
 }


 if (!(FUNC_0(VAR_7) & VAR_5))
  return 0;


 if (VAR_8 >= FUNC_1(VAR_3))
  return 0;

 return 1;
}
