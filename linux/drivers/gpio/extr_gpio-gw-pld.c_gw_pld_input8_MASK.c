
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gw_pld {int out; int client; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct gw_pld* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gw_pld *VAR_2 = FUNC_1(VAR_0);

 VAR_2->out |= FUNC_0(VAR_1);
 return FUNC_2(VAR_2->client, VAR_2->out);
}
