
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3;


 if ((VAR_3 = FUNC_2(VAR_1, VAR_0))) {
  VAR_3 += FUNC_1(VAR_0);

  while (FUNC_0((unsigned char)*VAR_3++))
   VAR_2++;
 }
 return (VAR_2);
}
