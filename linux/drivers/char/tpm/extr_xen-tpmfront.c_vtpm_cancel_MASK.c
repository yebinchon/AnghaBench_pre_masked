
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_private {int evtchn; TYPE_1__* shr; } ;
struct tpm_chip {int dev; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 struct tpm_private* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tpm_chip *VAR_1)
{
 struct tpm_private *VAR_2 = FUNC_0(&VAR_1->dev);
 VAR_2->shr->state = VAR_0;
 FUNC_2();
 FUNC_1(VAR_2->evtchn);
}
