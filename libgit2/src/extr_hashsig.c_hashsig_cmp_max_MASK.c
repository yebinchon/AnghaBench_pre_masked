
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hashsig_t ;


 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 hashsig_t VAR_3 = *(const hashsig_t *)VAR_0, VAR_4 = *(const hashsig_t *)VAR_1;
 FUNC_0(VAR_2);
 return (VAR_3 < VAR_4) ? -1 : (VAR_3 > VAR_4) ? 1 : 0;
}
