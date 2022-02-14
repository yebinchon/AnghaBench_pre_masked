
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,size_t*) ;

__attribute__((used)) static unsigned long FUNC_1(char *VAR_0, unsigned long VAR_1)
{
 const char *VAR_2;
 unsigned long VAR_3;
 size_t VAR_4 = VAR_1;

 VAR_2 = VAR_0;
 VAR_3 = VAR_4;
 while (0 < VAR_4) {
  (void) FUNC_0(&VAR_2, &VAR_4);
  if (!VAR_2)
   break;
 }
 return VAR_3 - VAR_4;
}
