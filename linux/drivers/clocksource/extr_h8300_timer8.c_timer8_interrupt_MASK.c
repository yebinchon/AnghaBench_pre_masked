
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct timer8_priv {scalar_t__ mapbase; TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct timer8_priv *VAR_6 = VAR_5;

 if (FUNC_1(&VAR_6->ced))
  FUNC_2(0x0000, VAR_6->mapbase + VAR_2);

 VAR_6->ced.event_handler(&VAR_6->ced);

 FUNC_0(VAR_0, VAR_6->mapbase + VAR_3);

 return VAR_1;
}
