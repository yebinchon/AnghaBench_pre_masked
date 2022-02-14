
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int ngpio; } ;
struct dio48e_gpio {scalar_t__ base; } ;


 size_t FUNC_0 (size_t const*) ;
 unsigned int VAR_0 ;
 size_t FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int const,int ) ;
 int FUNC_3 (unsigned long*,int ) ;
 struct dio48e_gpio* FUNC_4 (struct gpio_chip*) ;
 unsigned long FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned long *VAR_2,
 unsigned long *VAR_3)
{
 struct dio48e_gpio *const VAR_4 = FUNC_4(VAR_1);
 size_t VAR_5;
 static const size_t VAR_6[] = { 0, 1, 2, 4, 5, 6 };
 const unsigned int VAR_7 = 8;
 unsigned int VAR_8;
 size_t VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;
 const unsigned long VAR_12 = FUNC_2(VAR_7 - 1, 0);
 unsigned long VAR_13;


 FUNC_3(VAR_3, VAR_1->ngpio);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6); VAR_5++) {

  VAR_8 = VAR_5 * VAR_7;


  VAR_9 = FUNC_1(VAR_8);


  VAR_10 = VAR_8 % VAR_0;


  VAR_11 = VAR_2[VAR_9] & (VAR_12 << VAR_10);
  if (!VAR_11) {

   continue;
  }


  VAR_13 = FUNC_5(VAR_4->base + VAR_6[VAR_5]);


  VAR_3[VAR_9] |= (VAR_13 << VAR_10) & VAR_11;
 }

 return 0;
}
