
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf857x {int out; int (* write ) (int ,int) ;int lock; int client; } ;
struct gpio_chip {int dummy; } ;


 struct pcf857x* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct pcf857x *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_2->out |= (1 << VAR_1);
 VAR_3 = VAR_2->write(VAR_2->client, VAR_2->out);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
