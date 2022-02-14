
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf857x {unsigned int out; int (* write ) (int ,unsigned int) ;int lock; int client; } ;
struct gpio_chip {int dummy; } ;


 struct pcf857x* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct pcf857x *VAR_3 = FUNC_0(VAR_0);
 unsigned VAR_4 = 1 << VAR_1;
 int VAR_5;

 FUNC_1(&VAR_3->lock);
 if (VAR_2)
  VAR_3->out |= VAR_4;
 else
  VAR_3->out &= ~VAR_4;
 VAR_5 = VAR_3->write(VAR_3->client, VAR_3->out);
 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
