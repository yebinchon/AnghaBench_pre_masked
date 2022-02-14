
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 size_t FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, char *VAR_2, size_t VAR_3, const char *VAR_4,
           const char *VAR_5, const char **VAR_6)
{
  size_t VAR_7;

  if ((VAR_7 = FUNC_1(VAR_4, VAR_5)) == 0) {
    FUNC_0(VAR_0, "%s name should not be empty !\n", VAR_1);
    return 0;
  }

  if (VAR_7 >= VAR_3) {
    FUNC_0(VAR_0, "%s name too long, max %d !\n", VAR_1, VAR_3 - 1);
    return 0;
  }

  FUNC_2(VAR_2, VAR_4, VAR_7);
  VAR_2[VAR_7] = '\0';

  *VAR_6 = VAR_4 + VAR_7;
  *VAR_6 += FUNC_3(*VAR_6, VAR_5);

  return 1;
}
