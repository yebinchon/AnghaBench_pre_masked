
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_mtus {unsigned int nmtus; int* mtus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_mtus*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, char *VAR_4[], int VAR_5, const char *VAR_6)
{
 struct ch_mtus VAR_7;
 unsigned int VAR_8;

 if (VAR_3 == VAR_5) {
  if (FUNC_0(VAR_6, VAR_0, &VAR_7) < 0)
   FUNC_1(1, "get MTU table");
  for (VAR_8 = 0; VAR_8 < VAR_7.nmtus; ++VAR_8)
   FUNC_3("%u ", VAR_7.mtus[VAR_8]);
  FUNC_3("\n");
 } else if (VAR_3 <= VAR_5 + VAR_2) {
  VAR_7.nmtus = VAR_3 - VAR_5;

  for (VAR_8 = 0; VAR_8 < VAR_7.nmtus; ++VAR_8) {
   char *VAR_9;
   unsigned long VAR_10 = FUNC_4(VAR_4[VAR_5 + VAR_8], &VAR_9, 0);

   if (*VAR_9 || VAR_10 > 9600) {
    FUNC_5("bad parameter \"%s\"",
          VAR_4[VAR_5 + VAR_8]);
    return -1;
   }
   if (VAR_8 && VAR_10 < VAR_7.mtus[VAR_8 - 1])
    FUNC_2(1, "MTUs must be in ascending order");
   VAR_7.mtus[VAR_8] = VAR_10;
  }
  if (FUNC_0(VAR_6, VAR_1, &VAR_7) < 0)
   FUNC_1(1, "set MTU table");
 } else
  return -1;

 return 0;
}
