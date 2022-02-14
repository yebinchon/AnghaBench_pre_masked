
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* git__tsort_cmp ) (void const*,void const*) ;


 int FUNC_0 (void const*,void const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 return ((git__tsort_cmp)VAR_2)(VAR_0, VAR_1);
}
