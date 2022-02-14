
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct thunderx_gpio {scalar_t__ register_base; } ;
struct gpio_chip {int ngpio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct thunderx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_3,
           unsigned long *VAR_4,
           unsigned long *VAR_5)
{
 int VAR_6;
 u64 VAR_7, VAR_8;
 struct thunderx_gpio *VAR_9 = FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 <= VAR_3->ngpio / 64; VAR_6++) {
  VAR_7 = VAR_5[VAR_6] & VAR_4[VAR_6];
  VAR_8 = ~VAR_5[VAR_6] & VAR_4[VAR_6];
  FUNC_1(VAR_7, VAR_9->register_base + (VAR_6 * VAR_0) + VAR_2);
  FUNC_1(VAR_8, VAR_9->register_base + (VAR_6 * VAR_0) + VAR_1);
 }
}
