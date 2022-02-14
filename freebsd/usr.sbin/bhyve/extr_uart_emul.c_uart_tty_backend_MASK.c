
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfd; int wfd; int opened; } ;
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
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_10, const char *VAR_11)
{

 cap_rights_t VAR_12;
 cap_ioctl_t VAR_13[] = { VAR_7, VAR_9, VAR_8 };

 int VAR_14;

 VAR_14 = FUNC_7(VAR_11, VAR_6 | VAR_5);
 if (VAR_14 < 0)
  return (-1);

 if (!FUNC_5(VAR_14)) {
  FUNC_3(VAR_14);
  return (-1);
 }

 VAR_10->tty.rfd = VAR_10->tty.wfd = VAR_14;
 VAR_10->tty.opened = 1;


 FUNC_0(&VAR_12, VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_2(VAR_14, &VAR_12) == -1)
  FUNC_4(VAR_4, "Unable to apply rights for sandbox");
 if (FUNC_1(VAR_14, VAR_13, FUNC_6(VAR_13)) == -1)
  FUNC_4(VAR_4, "Unable to apply rights for sandbox");


 return (0);
}
