
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {char const* compatible; } ;
struct i2c_client {int name; } ;


 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static const struct of_device_id*
FUNC_2(const struct of_device_id *VAR_0,
      struct i2c_client *VAR_1)
{
 const char *VAR_2;

 for (; VAR_0->compatible[0]; VAR_0++) {






  if (FUNC_1(VAR_1->name, VAR_0->compatible))
   return VAR_0;

  VAR_2 = FUNC_0(VAR_0->compatible, ',');
  if (!VAR_2)
   VAR_2 = VAR_0->compatible;
  else
   VAR_2++;

  if (FUNC_1(VAR_1->name, VAR_2))
   return VAR_0;
 }

 return ((void*)0);
}
