
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {scalar_t__ name; } ;


 int FUNC_0 (struct property_entry const*) ;
 int FUNC_1 (struct property_entry const*) ;

void FUNC_2(const struct property_entry *VAR_0)
{
 const struct property_entry *VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = VAR_0; VAR_1->name; VAR_1++)
  FUNC_1(VAR_1);

 FUNC_0(VAR_0);
}
