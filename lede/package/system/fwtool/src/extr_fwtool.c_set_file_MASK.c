
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(FILE **VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_1 < 0)
  VAR_1 = VAR_4;
 else if (VAR_1 != VAR_4) {
  FUNC_0("Error: mixing appending and extracting data is not supported\n");
  return 1;
 }

 if (*VAR_2) {
  FUNC_0("Error: the same append/extract option cannot be used multiple times\n");
  return 1;
 }

 *VAR_2 = FUNC_1(VAR_3, VAR_4 == VAR_0);
 return !*VAR_2;
}
