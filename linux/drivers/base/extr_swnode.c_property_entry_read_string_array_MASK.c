
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {scalar_t__ is_array; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (char const**,void const*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;
 size_t FUNC_4 (struct property_entry const*,char const*,int) ;
 void* FUNC_5 (struct property_entry const*,char const*,size_t) ;
 struct property_entry* FUNC_6 (struct property_entry const*,char const*) ;

__attribute__((used)) static int FUNC_7(const struct property_entry *VAR_1,
         const char *VAR_2,
         const char **VAR_3, size_t VAR_4)
{
 const struct property_entry *VAR_5;
 const void *VAR_6;
 size_t VAR_7, VAR_8;


 VAR_5 = FUNC_6(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->is_array)

  VAR_7 = FUNC_4(VAR_1, VAR_2,
         sizeof(const char *));
 else

  VAR_7 = 1;


 if (!VAR_3)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_7);
 VAR_8 = VAR_7 * sizeof(*VAR_3);

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_8);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_2(VAR_3, VAR_6, VAR_8);

 return VAR_7;
}
