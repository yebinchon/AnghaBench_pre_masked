
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* prev; TYPE_2__** kids; } ;
struct TYPE_10__ {TYPE_1__ x; } ;
typedef TYPE_2__* Node ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(Node VAR_1, Node VAR_2) {
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->x.kids) && VAR_1->x.kids[VAR_3]; VAR_3++)
  FUNC_4(VAR_1->x.kids[VAR_3], VAR_2);
 FUNC_3(VAR_2->x.prev, VAR_1);
 FUNC_3(VAR_1, VAR_2);
 FUNC_1(FUNC_2(VAR_0, "(listing %x)\n", VAR_1));
}
