
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static FILE *
FUNC_2(const char *VAR_2, bool VAR_3)
{
 FILE *VAR_4;

 if (!FUNC_1(VAR_2, "-"))
  return VAR_3 ? VAR_1 : VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_3 ? "w" : "r+");
 if (!VAR_4 && !VAR_3)
  VAR_4 = FUNC_0(VAR_2, "r");

 return VAR_4;
}
