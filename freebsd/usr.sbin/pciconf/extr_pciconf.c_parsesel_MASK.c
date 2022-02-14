
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcisel {unsigned long pc_func; unsigned long pc_dev; unsigned long pc_bus; unsigned long pc_domain; } ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static struct pcisel
FUNC_5(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;
 struct pcisel VAR_3;
 unsigned long VAR_4[4];
 int VAR_5;

 VAR_1 = FUNC_2(VAR_0, '@');
 if (VAR_1 != ((void*)0))
  VAR_1++;
 else
  VAR_1 = VAR_0;

 if (FUNC_3(VAR_1, "pci", 3) == 0) {
  VAR_1 += 3;
  VAR_5 = 0;
  while (FUNC_1(*VAR_1) && VAR_5 < 4) {
   VAR_4[VAR_5++] = FUNC_4(VAR_1, &VAR_2, 10);
   VAR_1 = VAR_2;
   if (*VAR_1 == ':')
    VAR_1++;
  }
  if (VAR_5 > 0 && *VAR_1 == '\0') {
   VAR_3.pc_func = (VAR_5 > 2) ? VAR_4[--VAR_5] : 0;
   VAR_3.pc_dev = (VAR_5 > 0) ? VAR_4[--VAR_5] : 0;
   VAR_3.pc_bus = (VAR_5 > 0) ? VAR_4[--VAR_5] : 0;
   VAR_3.pc_domain = (VAR_5 > 0) ? VAR_4[--VAR_5] : 0;
   return (VAR_3);
  }
 }
 FUNC_0(1, "cannot parse selector %s", VAR_0);
}
