
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char const*,int,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const char *VAR_2, int VAR_3)
{

 VAR_0++;
 if (VAR_2 == ((void*)0))
  FUNC_0("ok %d - %s # mode 0x%x\n", VAR_0, VAR_1, VAR_3);
 else
  FUNC_0("ok %d - %s # mode 0x%x - %s\n", VAR_0, VAR_1,
      VAR_3, VAR_2);
}
