
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 () ;
 int FUNC_1 (char*,double) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static void FUNC_3(const char **VAR_0)
{
 double VAR_1 = FUNC_0() / 1.0e9;

 if (*VAR_0)
  VAR_1 -= FUNC_2(*VAR_0, ((void*)0));
 FUNC_1("%lf\n", VAR_1);
}
