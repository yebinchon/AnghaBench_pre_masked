
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* x; struct TYPE_6__* link; } ;
typedef TYPE_1__* List ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

List FUNC_1(void *VAR_2, List VAR_3) {
 List VAR_4;

 if ((VAR_4 = VAR_1) != ((void*)0))
  VAR_1 = VAR_1->link;
 else
  FUNC_0(VAR_4, VAR_0);
 if (VAR_3) {
  VAR_4->link = VAR_3->link;
  VAR_3->link = VAR_4;
 } else
  VAR_4->link = VAR_4;
 VAR_4->x = VAR_2;
 return VAR_4;
}
