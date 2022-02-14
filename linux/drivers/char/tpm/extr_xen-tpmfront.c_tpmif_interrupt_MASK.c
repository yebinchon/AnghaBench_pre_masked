
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_private {int read_queue; TYPE_1__* shr; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;




 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct tpm_private *VAR_3 = VAR_2;

 switch (VAR_3->shr->state) {
 case 129:
 case 130:
  FUNC_0(&VAR_3->read_queue);
  break;
 case 128:
 case 131:
 default:
  break;
 }
 return VAR_0;
}
