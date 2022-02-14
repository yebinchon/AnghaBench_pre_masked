
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
 FUNC_0("refs/heads/inv@{id");
 FUNC_0("refs/heads/back\\slash");

 FUNC_0("refs/heads/foo ");
 FUNC_0("refs/heads/foo /bar");
 FUNC_0("refs/heads/com1:bar/foo");

 FUNC_0("refs/heads/e:");
 FUNC_0("refs/heads/c:/foo");

 FUNC_0("refs/heads/foo.");
}
