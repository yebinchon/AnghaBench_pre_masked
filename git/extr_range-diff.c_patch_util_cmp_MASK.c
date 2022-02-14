
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_util {char const* diff; } ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const struct patch_util *VAR_1,
     const struct patch_util *VAR_2, const char *VAR_3)
{
 return FUNC_0(VAR_1->diff, VAR_3 ? VAR_3 : VAR_2->diff);
}
