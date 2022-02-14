
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int item; int module; } ;
struct TYPE_9__ {TYPE_2__* data; } ;
typedef TYPE_1__ GSLList ;
typedef int GModule ;
typedef TYPE_2__ GColors ;
typedef int GColorItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;

GColors *
FUNC_4 (GColorItem VAR_2, GModule VAR_3)
{
  GColors *VAR_4 = FUNC_3 (), *VAR_5 = ((void*)0);
  GSLList *VAR_6 = ((void*)0);

  VAR_4->module = VAR_3;
  VAR_4->item = VAR_2;


  if ((VAR_6 = FUNC_2 (VAR_0, VAR_1, VAR_4)))
    VAR_5 = VAR_6->data;


  if (!VAR_5)
    VAR_5 = FUNC_1 (VAR_2);
  FUNC_0 (VAR_4);

  return VAR_5;
}
