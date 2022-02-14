
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irqmask; int irqaddr; } ;
typedef TYPE_1__ ecard_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ecard_t *VAR_0)
{
 return !VAR_0->irqmask || FUNC_0(VAR_0->irqaddr) & VAR_0->irqmask;
}
