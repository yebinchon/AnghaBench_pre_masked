
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pca963x_led {TYPE_2__* chip; } ;
struct TYPE_4__ {TYPE_1__* chipdef; } ;
struct TYPE_3__ {unsigned int scaling; } ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct pca963x_led *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->chip->chipdef->scaling;

 return VAR_2 ? FUNC_0(VAR_1 * VAR_2, 1000) : VAR_1;
}
