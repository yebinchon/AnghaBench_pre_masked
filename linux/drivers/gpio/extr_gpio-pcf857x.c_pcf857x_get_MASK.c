
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf857x {int (* read ) (int ) ;int client; } ;
struct gpio_chip {int dummy; } ;


 struct pcf857x* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct pcf857x *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = VAR_2->read(VAR_2->client);
 return (VAR_3 < 0) ? VAR_3 : !!(VAR_3 & (1 << VAR_1));
}
