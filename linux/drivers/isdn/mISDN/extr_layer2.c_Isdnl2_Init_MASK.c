
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int strState; int strEvent; int event_count; int state_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_6(u_int *VAR_8)
{
 int VAR_9;
 VAR_4 = VAR_8;
 FUNC_4(&VAR_3);
 VAR_5.state_count = VAR_2;
 VAR_5.event_count = VAR_1;
 VAR_5.strEvent = VAR_6;
 VAR_5.strState = VAR_7;
 VAR_9 = FUNC_3(&VAR_5, VAR_0, FUNC_0(VAR_0));
 if (VAR_9)
  goto error;
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto error_fsm;
 return 0;

error_fsm:
 FUNC_2(&VAR_5);
error:
 FUNC_5(&VAR_3);
 return VAR_9;
}
