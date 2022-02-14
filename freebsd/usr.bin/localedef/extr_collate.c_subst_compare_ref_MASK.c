
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int * ref; } ;
typedef TYPE_1__ subst_t ;


 int FUNC_0 (int const*,int const*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const wchar_t *VAR_2 = ((const subst_t *)VAR_0)->ref;
 const wchar_t *VAR_3 = ((const subst_t *)VAR_1)->ref;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 return ((VAR_4 < 0) ? -1 : (VAR_4 > 0) ? 1 : 0);
}
