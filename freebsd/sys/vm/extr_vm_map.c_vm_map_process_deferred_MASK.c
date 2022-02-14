
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct thread {TYPE_2__* td_map_def_user; } ;
struct TYPE_5__ {int * vm_object; } ;
struct TYPE_6__ {int eflags; int end; int start; TYPE_1__ object; struct TYPE_6__* defer_next; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct thread* VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct thread *VAR_5;
 vm_map_entry_t VAR_6, VAR_7;
 vm_object_t VAR_8;

 VAR_5 = VAR_4;
 VAR_6 = VAR_5->td_map_def_user;
 VAR_5->td_map_def_user = ((void*)0);
 while (VAR_6 != ((void*)0)) {
  VAR_7 = VAR_6->defer_next;
  FUNC_1((VAR_6->eflags & (VAR_3 |
      VAR_2)) != (VAR_3 |
      VAR_2));
  if ((VAR_6->eflags & VAR_3) != 0) {




   FUNC_0((VAR_6->eflags & VAR_1) == 0,
       ("Submap with writecount"));
   VAR_8 = VAR_6->object.vm_object;
   FUNC_0(VAR_8 != ((void*)0), ("No object for writecount"));
   FUNC_4(VAR_8, VAR_6->start,
       VAR_6->end);
  }
  FUNC_3(VAR_6, 0);
  FUNC_2(VAR_6, VAR_0);
  VAR_6 = VAR_7;
 }
}
