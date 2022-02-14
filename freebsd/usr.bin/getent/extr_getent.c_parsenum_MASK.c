
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned char) ;
 unsigned long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, unsigned long *VAR_4)
{
 unsigned long VAR_5;
 char *VAR_6;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));

 if (!FUNC_1((unsigned char)VAR_3[0]))
  return 0;
 VAR_2 = 0;
 VAR_5 = FUNC_2(VAR_3, &VAR_6, 10);
 if (VAR_5 == VAR_1 && VAR_2 == VAR_0)
  return 0;
 if (*VAR_6 != '\0')
  return 0;
 *VAR_4 = VAR_5;
 return 1;
}
