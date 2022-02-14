
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_3__ {int (* event_handler ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 VAR_1.event_handler(&VAR_1);
 return VAR_0;
}
