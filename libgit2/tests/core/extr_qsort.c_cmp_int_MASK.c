
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 int VAR_3 = *(const int *)VAR_0, VAR_4 = *(const int *)VAR_1;
 FUNC_0(VAR_2);
 return (VAR_3 < VAR_4) ? -1 : (VAR_3 > VAR_4) ? +1 : 0;
}
