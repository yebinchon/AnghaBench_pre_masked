
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rebase_type { ____Placeholder_rebase_type } rebase_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static enum rebase_type FUNC_5(const char *VAR_6, const char *VAR_7,
  int VAR_8)
{
 int VAR_9 = FUNC_3(VAR_7);

 if (!VAR_9)
  return VAR_0;
 else if (VAR_9 > 0)
  return VAR_5;
 else if (!FUNC_4(VAR_7, "preserve") || !FUNC_4(VAR_7, "p"))
  return VAR_4;
 else if (!FUNC_4(VAR_7, "merges") || !FUNC_4(VAR_7, "m"))
  return VAR_3;
 else if (!FUNC_4(VAR_7, "interactive") || !FUNC_4(VAR_7, "i"))
  return VAR_1;





 if (VAR_8)
  FUNC_1(FUNC_0("Invalid value for %s: %s"), VAR_6, VAR_7);
 else
  FUNC_2(FUNC_0("Invalid value for %s: %s"), VAR_6, VAR_7);

 return VAR_2;
}
