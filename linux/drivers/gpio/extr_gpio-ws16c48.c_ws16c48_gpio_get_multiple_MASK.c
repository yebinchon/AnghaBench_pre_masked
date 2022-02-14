
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws16c48_gpio {scalar_t__ base; } ;
struct gpio_chip {unsigned int const ngpio; } ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (unsigned int const,int ) ;
 int FUNC_2 (unsigned long*,unsigned int const) ;
 struct ws16c48_gpio* FUNC_3 (struct gpio_chip*) ;
 unsigned long FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1,
 unsigned long *VAR_2, unsigned long *VAR_3)
{
 struct ws16c48_gpio *const VAR_4 = FUNC_3(VAR_1);
 const unsigned int VAR_5 = 8;
 size_t VAR_6;
 const size_t VAR_7 = VAR_1->ngpio / VAR_5;
 unsigned int VAR_8;
 size_t VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;
 const unsigned long VAR_12 = FUNC_1(VAR_5 - 1, 0);
 unsigned long VAR_13;


 FUNC_2(VAR_3, VAR_1->ngpio);


 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {

  VAR_8 = VAR_6 * VAR_5;


  VAR_9 = FUNC_0(VAR_8);


  VAR_10 = VAR_8 % VAR_0;


  VAR_11 = VAR_2[VAR_9] & (VAR_12 << VAR_10);
  if (!VAR_11) {

   continue;
  }


  VAR_13 = FUNC_4(VAR_4->base + VAR_6);


  VAR_3[VAR_9] |= (VAR_13 << VAR_10) & VAR_11;
 }

 return 0;
}
