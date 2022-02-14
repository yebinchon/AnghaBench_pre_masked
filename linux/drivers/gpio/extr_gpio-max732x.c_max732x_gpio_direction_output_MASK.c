
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max732x_chip {unsigned int dir_output; TYPE_1__* client; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int name; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,unsigned int) ;
 struct max732x_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
  unsigned VAR_2, int VAR_3)
{
 struct max732x_chip *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = 1u << VAR_2;

 if ((VAR_5 & VAR_4->dir_output) == 0) {
  FUNC_0(&VAR_4->client->dev, "%s port %d is input only\n",
   VAR_4->client->name, VAR_2);
  return -VAR_0;
 }

 FUNC_2(VAR_1, VAR_2, VAR_3);
 return 0;
}
