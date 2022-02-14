
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WSClient ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ GSLList ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int*) ;
 int VAR_0 ;

__attribute__((used)) static WSClient *
FUNC_1 (int VAR_1, GSLList ** VAR_2)
{
  GSLList *VAR_3 = ((void*)0);


  if (!(VAR_3 = FUNC_0 (*VAR_2, VAR_0, &VAR_1)))
    return ((void*)0);
  return (WSClient *) VAR_3->data;
}
