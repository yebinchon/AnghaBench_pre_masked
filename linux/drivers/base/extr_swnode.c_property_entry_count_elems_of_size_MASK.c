
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {size_t length; } ;


 int VAR_0 ;
 struct property_entry* FUNC_0 (struct property_entry const*,char const*) ;

__attribute__((used)) static int
FUNC_1(const struct property_entry *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 const struct property_entry *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return VAR_4->length / VAR_3;
}
