
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1,
    unsigned VAR_2, int VAR_3)
{

 FUNC_1(FUNC_2(VAR_0), VAR_1,
       (FUNC_0(VAR_2 + 16)) | (VAR_3 << VAR_2));
}
