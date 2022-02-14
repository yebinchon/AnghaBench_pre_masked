
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct _qs {int dummy; } ;
struct _cfg {scalar_t__* d; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(struct _qs *VAR_1, struct _cfg *VAR_2, int VAR_3, char *VAR_4[])
{
 uint64_t VAR_5;

 (void)VAR_1;
 if (FUNC_1(VAR_4[0], "ether") != 0)
  return 2;
 if (VAR_3 != 2)
  return 1;
 VAR_5 = FUNC_0(VAR_4[VAR_3 - 1]);
 if (VAR_5 == VAR_0)
  return 1;
 VAR_2->d[0] = VAR_5;
 return 0;
}
