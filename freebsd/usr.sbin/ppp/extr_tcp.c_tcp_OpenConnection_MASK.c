
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct servent {scalar_t__ s_port; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 struct servent* FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char const*,char*,...) ;
 int FUNC_7 (int ,int ,int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_7, char *VAR_8, char *VAR_9)
{
  struct sockaddr_in VAR_10;
  int VAR_11;
  struct servent *VAR_12;

  VAR_10.sin_family = VAR_0;
  VAR_10.sin_addr = FUNC_0(VAR_8);
  if (VAR_10.sin_addr.s_addr == VAR_1) {
    FUNC_6(VAR_3, "%s: %s: unknown host\n", VAR_7, VAR_8);
    return -2;
  }
  VAR_10.sin_port = FUNC_5(FUNC_1(VAR_9));
  if (VAR_10.sin_port == 0) {
    VAR_12 = FUNC_4(VAR_9, "tcp");
    if (VAR_12)
      VAR_10.sin_port = VAR_12->s_port;
    else {
      FUNC_6(VAR_3, "%s: %s: unknown service\n", VAR_7, VAR_9);
      return -2;
    }
  }
  FUNC_6(VAR_2, "%s: Connecting to %s:%s/tcp\n", VAR_7, VAR_8, VAR_9);

  VAR_11 = FUNC_7(VAR_4, VAR_5, 0);
  if (VAR_11 < 0)
    return -2;

  if (FUNC_3(VAR_11, (struct sockaddr *)&VAR_10, sizeof VAR_10) < 0) {
    FUNC_6(VAR_3, "%s: connect: %s\n", VAR_7, FUNC_8(VAR_6));
    FUNC_2(VAR_11);
    return -2;
  }

  return VAR_11;
}
