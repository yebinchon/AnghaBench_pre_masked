
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tool_addr {unsigned long func; unsigned long slot; unsigned long bus; unsigned long domain; } ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 unsigned long FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, struct mlx5_tool_addr *VAR_1)
{
 char *VAR_2;
 unsigned long VAR_3[4];
 int VAR_4;

 if (VAR_0 == ((void*)0)) {
  FUNC_3("no pci address specified");
  return (1);
 }
 if (FUNC_1(VAR_0, "pci", 3) == 0) {
  VAR_0 += 3;
  VAR_4 = 0;
  while (FUNC_0(*VAR_0) && VAR_4 < 4) {
   VAR_3[VAR_4++] = FUNC_2(VAR_0, &VAR_2, 10);
   VAR_0 = VAR_2;
   if (*VAR_0 == ':')
    VAR_0++;
  }
  if (VAR_4 > 0 && *VAR_0 == '\0') {
   VAR_1->func = (VAR_4 > 2) ? VAR_3[--VAR_4] : 0;
   VAR_1->slot = (VAR_4 > 0) ? VAR_3[--VAR_4] : 0;
   VAR_1->bus = (VAR_4 > 0) ? VAR_3[--VAR_4] : 0;
   VAR_1->domain = (VAR_4 > 0) ? VAR_3[--VAR_4] : 0;
   return (0);
  }
 }
 FUNC_3("invalid pci address %s", VAR_0);
 return (1);
}
