
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_client {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {int * current_controller; } ;


 TYPE_1__ VAR_0 ;
 struct agp_client* FUNC_0 (int *,int ) ;

struct agp_client *FUNC_1(pid_t VAR_1)
{
 struct agp_client *VAR_2;

 if (VAR_0.current_controller == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0.current_controller, VAR_1);
 return VAR_2;
}
