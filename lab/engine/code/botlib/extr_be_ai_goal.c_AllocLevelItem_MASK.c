
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ levelitem_t ;
struct TYPE_7__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*) ;

levelitem_t *FUNC_2(void)
{
 levelitem_t *VAR_3;

 VAR_3 = VAR_2;
 if (!VAR_3)
 {
  VAR_1.Print(VAR_0, "out of level items\n");
  return ((void*)0);
 }

 VAR_2 = VAR_2->next;
 FUNC_0(VAR_3, 0, sizeof(levelitem_t));
 return VAR_3;
}
