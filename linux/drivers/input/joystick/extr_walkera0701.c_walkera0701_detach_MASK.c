
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walkera_dev {TYPE_1__* parport; int pardevice; int input_dev; } ;
struct parport {scalar_t__ number; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct walkera_dev VAR_0 ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_1)
{
 struct walkera_dev *VAR_2 = &VAR_0;

 if (!VAR_2->pardevice || VAR_2->parport->number != VAR_1->number)
  return;

 FUNC_0(VAR_2->input_dev);
 FUNC_1(VAR_2->pardevice);
 VAR_2->parport = ((void*)0);
}
