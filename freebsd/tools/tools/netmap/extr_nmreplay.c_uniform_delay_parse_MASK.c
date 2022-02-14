
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _qs {int dummy; } ;
struct _cfg {scalar_t__* d; } ;


 int FUNC_0 (char*,long long,long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct _qs *VAR_1, struct _cfg *VAR_2, int VAR_3, char *VAR_4[])
{
 uint64_t VAR_5, VAR_6;

 (void)VAR_1;
 if (FUNC_2(VAR_4[0], "uniform") != 0)
  return 2;
 if (VAR_3 != 3)
  return 1;
 VAR_5 = FUNC_1(VAR_4[1]);
 VAR_6 = FUNC_1(VAR_4[2]);
 if (VAR_5 == VAR_0 || VAR_6 == VAR_0 || VAR_5 > VAR_6)
  return 1;
 FUNC_0("dmin %lld dmax %lld", (long long)VAR_5, (long long)VAR_6);
 VAR_2->d[0] = VAR_5;
 VAR_2->d[1] = VAR_6;
 VAR_2->d[2] = VAR_6 - VAR_5;
 return 0;
}
