
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pgprotval_t ;
typedef int pgprot_t ;





 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*,unsigned long,unsigned long,unsigned long,unsigned long long,unsigned long long) ;

__attribute__((used)) static inline void FUNC_3(int VAR_1, pgprot_t VAR_2, pgprotval_t VAR_3,
      unsigned long VAR_4, unsigned long VAR_5,
      unsigned long VAR_6, const char *VAR_7)
{
 static const char *VAR_8[] = {
  [130] = "conflict",
  [128] = "protect",
  [129] = "detect",
 };

 if (VAR_1 > VAR_0 || !FUNC_0(VAR_2, VAR_3))
  return;

 FUNC_2("CPA %8s %10s: 0x%016lx - 0x%016lx PFN %lx req %016llx prevent %016llx\n",
  VAR_8[VAR_1], VAR_7, VAR_4, VAR_5, VAR_6, (unsigned long long)FUNC_1(VAR_2),
  (unsigned long long)VAR_3);
}
