
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cn_children; } ;
typedef TYPE_1__ cd9660node ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(cd9660node *VAR_1)
{
 cd9660node *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->cn_children)) != ((void*)0)) {
  FUNC_1(&VAR_1->cn_children, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
 FUNC_2(VAR_1);
}
