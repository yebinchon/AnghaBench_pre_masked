
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int devd_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_un*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_4;
  struct sockaddr_un VAR_5;

  FUNC_0(&VAR_5, sizeof(struct sockaddr_un));

  if ((VAR_4 = FUNC_3(VAR_2, VAR_3, 0)) < 0) {
   FUNC_5(VAR_0, "Failed to create the socket for %s: %m",
      VAR_1);
   return (-1);
  }

  VAR_5.sun_family = VAR_2;
 VAR_5.sun_len = sizeof(VAR_5);
  FUNC_4(VAR_5.sun_path, VAR_1,
     sizeof(VAR_5.sun_path) - 1);

  if (FUNC_2(VAR_4, (struct sockaddr *)&VAR_5,
     sizeof(VAR_5)) == -1) {
   FUNC_5(VAR_0,"Failed to connect socket for %s: %m",
      VAR_1);
   if (FUNC_1(VAR_4) < 0 )
    FUNC_5(VAR_0,"Failed to close socket for %s: %m",
       VAR_1);
  return (-1);
  }

  return (VAR_4);
}
