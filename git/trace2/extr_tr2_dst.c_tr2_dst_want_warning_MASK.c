
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 static int VAR_1 = -1;

 if (VAR_1 == -1) {
  const char *VAR_2 = FUNC_1(VAR_0);
  if (!VAR_2 || !*VAR_2)
   VAR_1 = 0;
  else
   VAR_1 = FUNC_0(VAR_2) > 0;
 }

 return VAR_1;
}
