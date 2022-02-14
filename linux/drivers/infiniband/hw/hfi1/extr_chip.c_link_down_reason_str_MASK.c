
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t FUNC_0 (char**) ;
 char** VAR_0 ;

__attribute__((used)) static const char *FUNC_1(u8 VAR_1)
{
 const char *VAR_2 = ((void*)0);

 if (VAR_1 < FUNC_0(VAR_0))
  VAR_2 = VAR_0[VAR_1];
 if (!VAR_2)
  VAR_2 = "(invalid)";

 return VAR_2;
}
