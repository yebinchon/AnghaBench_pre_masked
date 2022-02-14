
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scale; int uscale; } ;
struct isl29018_chip {unsigned int calibscale; unsigned int ucalibscale; TYPE_1__ scale; } ;


 int VAR_0 ;
 int FUNC_0 (struct isl29018_chip*,int ) ;

__attribute__((used)) static int FUNC_1(struct isl29018_chip *VAR_1, int *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_1,
           VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = VAR_3 * VAR_1->scale.scale +
         VAR_3 * VAR_1->scale.uscale / 1000000;
 *VAR_2 = VAR_4 * VAR_1->calibscale +
        VAR_4 * VAR_1->ucalibscale / 1000000;

 return 0;
}
