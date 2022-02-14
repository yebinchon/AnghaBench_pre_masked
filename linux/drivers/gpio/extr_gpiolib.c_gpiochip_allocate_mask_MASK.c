
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int ngpio; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long*,int ) ;

__attribute__((used)) static unsigned long *FUNC_2(struct gpio_chip *VAR_1)
{
 unsigned long *VAR_2;

 VAR_2 = FUNC_0(VAR_1->ngpio, VAR_0);
 if (!VAR_2)
  return ((void*)0);


 FUNC_1(VAR_2, VAR_1->ngpio);

 return VAR_2;
}
