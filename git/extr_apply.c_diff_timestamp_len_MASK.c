
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,int) ;
 size_t FUNC_1 (char const*,int) ;
 int FUNC_2 (char const) ;
 size_t FUNC_3 (char const*,int) ;
 size_t FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,int) ;
 size_t FUNC_6 (char const*,int) ;

__attribute__((used)) static size_t FUNC_7(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2 = VAR_0 + VAR_1;
 size_t VAR_3;






 if (!FUNC_2(VAR_2[-1]))
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_2 - VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_6(VAR_0, VAR_2 - VAR_0);
 VAR_2 -= VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_2 - VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0, VAR_2 - VAR_0);
 VAR_2 -= VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2 - VAR_0);
 if (!VAR_3)
  return 0;
 VAR_2 -= VAR_3;

 if (VAR_2 == VAR_0)
  return 0;
 if (VAR_2[-1] == '\t') {
  VAR_2--;
  return VAR_0 + VAR_1 - VAR_2;
 }
 if (VAR_2[-1] != ' ')
  return 0;


 VAR_2 -= FUNC_5(VAR_0, VAR_2 - VAR_0);
 return VAR_0 + VAR_1 - VAR_2;
}
