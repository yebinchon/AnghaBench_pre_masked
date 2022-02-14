
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5);
 int VAR_8, VAR_9;

 if (!(VAR_7 & VAR_0))
  return;

 VAR_8 = FUNC_2(VAR_4, VAR_6);
retry:
 if (VAR_8)
  FUNC_3(VAR_4, VAR_6, VAR_2, 0);
 else
  FUNC_3(VAR_4, VAR_6, VAR_2, 1);

 VAR_9 = FUNC_2(VAR_4, VAR_6);
 if (VAR_8 != VAR_9) {
  FUNC_0(VAR_4->parent, "PMIC EIC level was changed.\n");
  VAR_8 = VAR_9;
  goto retry;
 }


 FUNC_3(VAR_4, VAR_6, VAR_1, 1);

 FUNC_3(VAR_4, VAR_6, VAR_3, 1);
}
