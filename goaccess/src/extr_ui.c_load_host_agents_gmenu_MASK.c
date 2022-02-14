
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * items; } ;
typedef int GSLList ;
typedef TYPE_1__ GMenu ;
typedef int GItem ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_1, void *VAR_2, int VAR_3)
{
  GSLList *VAR_4 = VAR_1;
  GMenu *VAR_5 = VAR_2;

  VAR_5->items = (GItem *) FUNC_1 (VAR_3, sizeof (GItem));
  FUNC_0 (VAR_4, VAR_0, VAR_5);
}
