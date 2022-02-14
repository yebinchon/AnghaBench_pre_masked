
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct gpio_chip {unsigned int base; unsigned int ngpio; } ;


 int FUNC_0 (struct seq_file*,char) ;
 int FUNC_1 (struct seq_file*,struct gpio_chip*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct gpio_chip *VAR_1)
{
 unsigned VAR_2;
 unsigned VAR_3 = VAR_1->base;

 for (VAR_2 = 0; VAR_2 < VAR_1->ngpio; VAR_2++, VAR_3++) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_0, '\n');
 }
}
