
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct em_sti_priv {TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct em_sti_priv *VAR_3 = VAR_2;

 VAR_3->ced.event_handler(&VAR_3->ced);
 return VAR_0;
}
