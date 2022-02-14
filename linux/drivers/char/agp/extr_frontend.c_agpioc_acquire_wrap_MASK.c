
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_file_private {int access_flags; int my_pid; } ;
struct agp_controller {int dummy; } ;
struct TYPE_5__ {int agp_in_use; } ;
struct TYPE_4__ {int backend_acquired; int * current_controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (struct agp_controller*) ;
 struct agp_controller* FUNC_3 (int ) ;
 TYPE_1__ VAR_8 ;
 struct agp_controller* FUNC_4 (int ) ;
 int FUNC_5 (struct agp_controller*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct agp_file_private *VAR_9)
{
 struct agp_controller *VAR_10;

 FUNC_0("");

 if (!(FUNC_9(VAR_0, &VAR_9->access_flags)))
  return -VAR_6;

 if (VAR_8.current_controller != ((void*)0))
  return -VAR_3;

 if (!VAR_7)
  return -VAR_4;

        if (FUNC_7(&VAR_7->agp_in_use))
                return -VAR_3;

 FUNC_6(&VAR_7->agp_in_use);

 VAR_8.backend_acquired = 1;

 VAR_10 = FUNC_4(VAR_9->my_pid);

 if (VAR_10 != ((void*)0)) {
  FUNC_2(VAR_10);
 } else {
  VAR_10 = FUNC_3(VAR_9->my_pid);

  if (VAR_10 == ((void*)0)) {
   VAR_8.backend_acquired = 0;
   FUNC_1(VAR_7);
   return -VAR_5;
  }
  FUNC_5(VAR_10);
  FUNC_2(VAR_10);
 }

 FUNC_8(VAR_1, &VAR_9->access_flags);
 FUNC_8(VAR_2, &VAR_9->access_flags);
 return 0;
}
