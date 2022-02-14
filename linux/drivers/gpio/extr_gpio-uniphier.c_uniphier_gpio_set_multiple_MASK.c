
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int ngpio; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_4,
           unsigned long *VAR_5, unsigned long *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4->ngpio; VAR_11 += VAR_2) {
  VAR_7 = VAR_11 / VAR_2;
  VAR_8 = VAR_11 % VAR_0;
  VAR_9 = (VAR_5[FUNC_0(VAR_11)] >> VAR_8) &
      VAR_1;
  VAR_10 = VAR_6[FUNC_0(VAR_11)] >> VAR_8;

  FUNC_1(VAR_4, VAR_7, VAR_3,
      VAR_9, VAR_10);
 }
}
