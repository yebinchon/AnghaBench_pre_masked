
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_char VAR_0)
{

 FUNC_0("\tACPI CPU=");
 if (VAR_0 == 0xff)
  FUNC_0("ALL\n");
 else
  FUNC_0("%d\n", (u_int)VAR_0);
}
