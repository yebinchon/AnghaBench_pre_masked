
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_2 (int,char*,char const*,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, struct sockaddr_in *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_5 == -1)
  FUNC_2(-1, "%s: socket(PF_INET, SOCK_DGRAM, 0): %s", VAR_3,
      FUNC_5(VAR_2));

 if (FUNC_1(VAR_5, (struct sockaddr *)VAR_4, sizeof(*VAR_4)) < 0)
  FUNC_2(-1, "%s: connect(%s): %s", VAR_3,
      FUNC_3(VAR_4->sin_addr), FUNC_5(VAR_2));

 if (FUNC_0(VAR_5) < 0)
  FUNC_2(-1, "%s: close(): %s", VAR_3, FUNC_5(VAR_2));
}
