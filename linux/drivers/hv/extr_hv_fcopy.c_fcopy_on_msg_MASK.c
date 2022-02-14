
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int recv_channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_7, int VAR_8)
{
 int *VAR_9 = (int *)VAR_7;

 if (VAR_8 != sizeof(int))
  return -VAR_0;

 if (VAR_6.state == VAR_1)
  return FUNC_1(*VAR_9);

 if (VAR_6.state != VAR_3)
  return -VAR_0;





 if (FUNC_0(&VAR_5)) {
  VAR_6.state = VAR_2;
  FUNC_2(*VAR_9);
  FUNC_3(VAR_6.recv_channel,
    VAR_4);
 }

 return 0;
}
