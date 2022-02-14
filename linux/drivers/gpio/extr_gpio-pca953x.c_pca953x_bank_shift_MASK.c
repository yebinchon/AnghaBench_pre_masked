
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ngpio; } ;
struct pca953x_chip {TYPE_1__ gpio_chip; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pca953x_chip *VAR_1)
{
 return FUNC_0((VAR_1->gpio_chip.ngpio - 1) / VAR_0);
}
