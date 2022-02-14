
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct software_node {struct property_entry* properties; } ;
struct property_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct property_entry*) ;
 int FUNC_1 (struct property_entry*) ;
 struct property_entry* FUNC_2 (struct property_entry const*) ;

__attribute__((used)) static int
FUNC_3(struct software_node *VAR_0,
      const struct property_entry *VAR_1)
{
 struct property_entry *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_0->properties = VAR_2;

 return 0;
}
