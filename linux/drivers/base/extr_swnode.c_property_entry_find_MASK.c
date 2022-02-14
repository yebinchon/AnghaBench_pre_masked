
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {size_t length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void const* FUNC_0 (int ) ;
 struct property_entry* FUNC_1 (struct property_entry const*,char const*) ;
 void* FUNC_2 (struct property_entry const*) ;

__attribute__((used)) static const void *FUNC_3(const struct property_entry *VAR_3,
           const char *VAR_4, size_t VAR_5)
{
 const struct property_entry *VAR_6;
 const void *VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_7 = FUNC_2(VAR_6);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 if (VAR_5 > VAR_6->length)
  return FUNC_0(-VAR_2);
 return VAR_7;
}
