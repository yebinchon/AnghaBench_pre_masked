
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _qs {int dummy; } ;
struct _cfg {int arg_len; int * arg; } ;


 int FUNC_0 (int,char*,int,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (double) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct _qs *VAR_2, struct _cfg *VAR_3, int VAR_4, char *VAR_5[])
{

 uint64_t VAR_6, VAR_7, VAR_8, *VAR_9;

        (void)VAR_2;
        if (FUNC_4(VAR_5[0], "exp") != 0)
  return 2;
        if (VAR_4 != 3)
                return 1;
        VAR_7 = FUNC_3(VAR_5[1]);
        VAR_8 = FUNC_3(VAR_5[2]);
        if (VAR_7 == VAR_1 || VAR_8 == VAR_1 || VAR_7 < VAR_8)
                return 1;
 VAR_7 -= VAR_8;
 VAR_3->arg_len = 512 * sizeof(uint64_t);
 VAR_3->arg = FUNC_1(1, VAR_3->arg_len);
 if (VAR_3->arg == ((void*)0))
  return 1;
 VAR_9 = (uint64_t *)VAR_3->arg;

 for (VAR_6 = 0; VAR_6 < 512; VAR_6++) {
  double VAR_10 = -FUNC_2 ((double)(512 - VAR_6) / 512) * VAR_7 + VAR_8;
  VAR_9[VAR_6] = (uint64_t)VAR_10;
  FUNC_0(5, "%ld: %le", VAR_6, VAR_10);
 }
        return 0;
}
