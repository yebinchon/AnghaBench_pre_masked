
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(signed char *VAR_0,
     enum object_type VAR_1,
     enum object_type VAR_2)
{
 enum object_type VAR_3;

 FUNC_0();
 VAR_3 = *VAR_0;
 if (VAR_3 == VAR_1)
  *VAR_0 = VAR_2;
 FUNC_1();

 return VAR_3 == VAR_1;
}
