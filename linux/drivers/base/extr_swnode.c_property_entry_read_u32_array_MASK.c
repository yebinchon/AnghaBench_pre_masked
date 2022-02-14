
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property_entry {int dummy; } ;


 scalar_t__ FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int *,void const*,size_t) ;
 void* FUNC_3 (struct property_entry const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(const struct property_entry *VAR_0,
      const char *VAR_1,
      u32 *VAR_2, size_t VAR_3)
{
 const void *VAR_4;
 size_t VAR_5 = VAR_3 * sizeof(*VAR_2);

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(VAR_2, VAR_4, VAR_5);
 return 0;
}
