
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(u_int VAR_0)
{
 if (VAR_0 < 1024)
  FUNC_0("%ubits", VAR_0);
 else if (VAR_0 < 1024*1024)
  FUNC_0("%ukb", VAR_0 / 1024);
 else
  FUNC_0("%uMb", VAR_0 / (1024*1024));
}
