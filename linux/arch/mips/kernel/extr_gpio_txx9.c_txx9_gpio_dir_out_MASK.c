
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_5 (unsigned int,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned int VAR_3,
        int VAR_4)
{
 unsigned long VAR_5;
 FUNC_3(&VAR_0, VAR_5);
 FUNC_5(VAR_3, VAR_4);
 FUNC_1(FUNC_0(&VAR_1->dir) | (1 << VAR_3),
       &VAR_1->dir);
 FUNC_2();
 FUNC_4(&VAR_0, VAR_5);
 return 0;
}
