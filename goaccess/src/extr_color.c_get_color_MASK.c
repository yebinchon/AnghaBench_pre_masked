
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ GSLList ;
typedef int GColors ;
typedef int GColorItem ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ,int *) ;

GColors *
FUNC_2 (GColorItem VAR_3)
{
  GColorItem VAR_4 = VAR_0;
  GSLList *VAR_5 = ((void*)0);

  if ((VAR_5 = FUNC_1 (VAR_1, VAR_2, &VAR_3)))
    return (GColors *) VAR_5->data;

  if ((VAR_5 = FUNC_1 (VAR_1, VAR_2, &VAR_4)))
    return (GColors *) VAR_5->data;


  FUNC_0 ("Unable to find color item %d", VAR_3);
}
