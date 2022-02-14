
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tsockaddr {int sa_family; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
typedef int addr ;
struct TYPE_11__ {int sin_family; } ;
struct TYPE_10__ {struct tsockaddr ctl_addr; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {TYPE_1__ addr; } ;
typedef TYPE_2__ CTL_RESPONSE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 TYPE_7__ VAR_4 ;
 int FUNC_2 (int ,TYPE_3__,int ,TYPE_2__*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct sockaddr*,scalar_t__*,int) ;
 TYPE_3__ VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_9 ;

int
FUNC_8(void)
{
 CTL_RESPONSE VAR_10;
 CTL_RESPONSE *VAR_11 = &VAR_10;
 struct sockaddr VAR_12;



 VAR_8.ctl_addr = *(struct tsockaddr *)&VAR_4;
 VAR_8.ctl_addr.sa_family = FUNC_3(VAR_4.sin_family);

 if (!FUNC_4(VAR_11))
  return (0);




 VAR_5 = "Waiting to connect with caller";
 do {
  if (VAR_11->addr.sa_family != VAR_0)
   FUNC_7("Response uses invalid network address");
  (void)FUNC_5(&VAR_12, &VAR_11->addr.sa_family, sizeof(VAR_12));
  VAR_12.sa_family = VAR_11->addr.sa_family;
  VAR_12.sa_len = sizeof(VAR_12);
  VAR_6 = 0;
  if (FUNC_1(VAR_9, &VAR_12, sizeof(VAR_12)) != -1)
   return (1);
 } while (VAR_6 == VAR_3);
 if (VAR_6 == VAR_2) {






  FUNC_2(VAR_7, VAR_8, VAR_1, VAR_11);
  FUNC_0(VAR_9);
  FUNC_6();
  return (0);
 }
 FUNC_7("Unable to connect with initiator");

 return (0);
}
