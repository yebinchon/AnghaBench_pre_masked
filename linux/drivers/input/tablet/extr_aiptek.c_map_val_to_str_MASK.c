
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiptek_map {int value; char const* string; } ;


 int VAR_0 ;

__attribute__((used)) static const char *FUNC_0(const struct aiptek_map *VAR_1, int VAR_2)
{
 const struct aiptek_map *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->value != VAR_0; VAR_3++)
  if (VAR_2 == VAR_3->value)
   return VAR_3->string;

 return "unknown";
}
