
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opened; int rfd; int wfd; } ;
struct uart_softc {TYPE_1__ tty; } ;
typedef int cap_rights_t ;
typedef int cap_ioctl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_12)
{

 cap_rights_t VAR_13;
 cap_ioctl_t VAR_14[] = { VAR_8, VAR_10, VAR_9 };


 if (VAR_11)
  return (-1);

 VAR_12->tty.rfd = VAR_6;
 VAR_12->tty.wfd = VAR_7;
 VAR_12->tty.opened = 1;

 if (FUNC_4(VAR_12->tty.rfd, VAR_4, VAR_5) != 0)
  return (-1);
 if (FUNC_4(VAR_12->tty.wfd, VAR_4, VAR_5) != 0)
  return (-1);


 FUNC_0(&VAR_13, VAR_0, VAR_1, VAR_2);
 if (FUNC_2(VAR_12->tty.rfd, &VAR_13) == -1)
  FUNC_3(VAR_3, "Unable to apply rights for sandbox");
 if (FUNC_1(VAR_12->tty.rfd, VAR_14, FUNC_5(VAR_14)) == -1)
  FUNC_3(VAR_3, "Unable to apply rights for sandbox");


 VAR_11 = 1;

 return (0);
}
