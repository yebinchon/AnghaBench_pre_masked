
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpic2810 {int buffer; int lock; int client; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct tpic2810* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct tpic2810 *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4->lock);

 VAR_5 = VAR_4->buffer & ~VAR_2;
 VAR_5 |= (VAR_2 & VAR_3);

 VAR_6 = FUNC_1(VAR_4->client, VAR_0,
     VAR_5);
 if (!VAR_6)
  VAR_4->buffer = VAR_5;

 FUNC_3(&VAR_4->lock);
}
