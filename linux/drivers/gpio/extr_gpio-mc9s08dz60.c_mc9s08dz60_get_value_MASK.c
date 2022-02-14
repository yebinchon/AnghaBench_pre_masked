
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mc9s08dz60 {int client; } ;
struct gpio_chip {int dummy; } ;
typedef int s32 ;


 struct mc9s08dz60* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 u8 VAR_2, VAR_3;
 s32 VAR_4;
 struct mc9s08dz60 *VAR_5 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, &VAR_2, &VAR_3);
 VAR_4 = FUNC_1(VAR_5->client, VAR_2);

 return (VAR_4 >= 0) ? (VAR_4 >> VAR_3) & 0x1 : 0;
}
