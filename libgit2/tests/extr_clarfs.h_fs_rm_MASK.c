
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0)
{
 char *VAR_1[4];

 VAR_1[0] = "/bin/rm";
 VAR_1[1] = "-Rf";
 VAR_1[2] = (char *)VAR_0;
 VAR_1[3] = ((void*)0);

 FUNC_0(
  FUNC_1(VAR_1),
  "Failed to cleanup the sandbox"
 );
}
