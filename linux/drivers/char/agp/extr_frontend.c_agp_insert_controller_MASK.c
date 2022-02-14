
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_controller {struct agp_controller* prev; struct agp_controller* next; } ;
struct TYPE_2__ {struct agp_controller* controllers; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct agp_controller *VAR_1)
{
 struct agp_controller *VAR_2;

 VAR_2 = VAR_0.controllers;
 VAR_1->next = VAR_2;

 if (VAR_2 != ((void*)0))
  VAR_2->prev = VAR_1;

 VAR_0.controllers = VAR_1;

 return 0;
}
