
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (char*,char*,char const*,...) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const git_oid *VAR_2, const git_oid *VAR_3, void *VAR_4)
{
 char VAR_5[VAR_0+1], VAR_6[VAR_0+1];
 (void)VAR_4;

 FUNC_0(VAR_6, VAR_3);
 VAR_6[VAR_0] = '\0';

 if (FUNC_1(VAR_2)) {
  FUNC_2("[new]     %.20s %s\n", VAR_6, VAR_1);
 } else {
  FUNC_0(VAR_5, VAR_2);
  VAR_5[VAR_0] = '\0';
  FUNC_2("[updated] %.10s..%.10s %s\n", VAR_5, VAR_6, VAR_1);
 }

 return 0;
}
