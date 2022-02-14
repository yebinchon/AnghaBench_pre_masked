
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_controller {struct agp_controller* prev; struct agp_controller* next; } ;
struct TYPE_2__ {int backend_acquired; struct agp_controller* current_controller; struct agp_controller* controllers; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct agp_controller*) ;
 int FUNC_2 (struct agp_controller*) ;
 int FUNC_3 (struct agp_controller*) ;

__attribute__((used)) static int FUNC_4(struct agp_controller *VAR_2)
{
 struct agp_controller *VAR_3;
 struct agp_controller *VAR_4;

 VAR_3 = VAR_2->prev;
 VAR_4 = VAR_2->next;

 if (VAR_3 != ((void*)0)) {
  VAR_3->next = VAR_4;
  if (VAR_4 != ((void*)0))
   VAR_4->prev = VAR_3;

 } else {
  if (VAR_4 != ((void*)0))
   VAR_4->prev = ((void*)0);

  VAR_1.controllers = VAR_4;
 }

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_1.current_controller == VAR_2) {
  VAR_1.current_controller = ((void*)0);
  VAR_1.backend_acquired = 0;
  FUNC_0(VAR_0);
 }
 FUNC_3(VAR_2);
 return 0;
}
