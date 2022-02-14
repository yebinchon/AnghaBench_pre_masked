
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ planenum; struct TYPE_7__* volume; struct TYPE_7__* brushlist; struct TYPE_7__* next; struct TYPE_7__** children; } ;
typedef TYPE_1__ node_t ;
typedef TYPE_1__ bspbrush_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3 (node_t *VAR_4)
{

 bspbrush_t *VAR_5, *VAR_6;


 if (VAR_4->planenum != VAR_0)
 {
  FUNC_3 (VAR_4->children[0]);
  FUNC_3 (VAR_4->children[1]);
 }


 for (VAR_5 = VAR_4->brushlist; VAR_5; VAR_5 = VAR_6)
 {
  VAR_6 = VAR_5->next;



  FUNC_0(VAR_5);
 }
 VAR_4->brushlist = ((void*)0);
 if (VAR_4->volume)
 {



  FUNC_0 (VAR_4->volume);
 }

 if (VAR_3 == 1) VAR_1--;



 FUNC_1(VAR_4);
}
