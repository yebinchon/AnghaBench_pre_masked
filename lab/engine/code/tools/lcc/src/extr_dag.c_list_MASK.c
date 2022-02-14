
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef TYPE_1__* Node ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(Node VAR_1) {
 if (VAR_1 && VAR_1->link == ((void*)0)) {
  if (VAR_0) {
   VAR_1->link = VAR_0->link;
   VAR_0->link = VAR_1;
  } else
   VAR_1->link = VAR_1;
  VAR_0 = VAR_1;
 }
}
