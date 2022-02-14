
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, struct sockaddr *VAR_2, struct sockaddr *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 != 0)
  FUNC_1("ioctl SIOCAIFADDR");
 return (VAR_4);
}
