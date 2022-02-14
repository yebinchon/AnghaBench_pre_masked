
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {scalar_t__ name; } ;


 int VAR_0 ;
 struct property_entry* FUNC_0 (int) ;
 int VAR_1 ;
 struct property_entry* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct property_entry*) ;
 int FUNC_3 (struct property_entry*,struct property_entry const*) ;
 int FUNC_4 (struct property_entry*) ;

struct property_entry *
FUNC_5(const struct property_entry *VAR_2)
{
 struct property_entry *VAR_3;
 int VAR_4, VAR_5 = 0;
 int VAR_6;

 if (!VAR_2)
  return ((void*)0);

 while (VAR_2[VAR_5].name)
  VAR_5++;

 VAR_3 = FUNC_1(VAR_5 + 1, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_6 = FUNC_3(&VAR_3[VAR_4], &VAR_2[VAR_4]);
  if (VAR_6) {
   while (--VAR_4 >= 0)
    FUNC_4(&VAR_3[VAR_4]);
   FUNC_2(VAR_3);
   return FUNC_0(VAR_6);
  }
 }

 return VAR_3;
}
