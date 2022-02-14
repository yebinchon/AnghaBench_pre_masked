
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (int ,char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, int *VAR_2, const char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_5, 0);
 if (VAR_4 < 0 || *VAR_5) {
  FUNC_1(VAR_0, VAR_3, VAR_1);
  return 1;
 }
 *VAR_2 = VAR_4;
 return 0;
}
