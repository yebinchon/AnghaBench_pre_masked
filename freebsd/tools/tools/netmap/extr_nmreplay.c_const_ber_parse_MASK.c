
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _qs {int dummy; } ;
struct _cfg {int arg_len; int* arg; double* d; } ;
typedef int _P64 ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,double,int ) ;
 int* FUNC_1 (int,int) ;
 double FUNC_2 (char*,int *,int*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct _qs *VAR_1, struct _cfg *VAR_2, int VAR_3, char *VAR_4[])
{
 double VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;
 uint32_t *VAR_10;
 const uint32_t VAR_11 = (1<<24) - 1;

 (void)VAR_1;
 if (FUNC_3(VAR_4[0], "ber") != 0)
  return 2;
 if (VAR_3 != 2)
  return 1;
 VAR_5 = FUNC_2(VAR_4[VAR_3-1], ((void*)0), &VAR_9);
 if (VAR_9 || VAR_5 < 0 || VAR_5 > 1)
  return 1;
 VAR_2->arg_len = VAR_0 * sizeof(uint32_t);
 VAR_10 = FUNC_1(1, VAR_2->arg_len);
 if (VAR_10 == ((void*)0))
  return 1;
 VAR_2->arg = VAR_10;
 VAR_6 = 1 - VAR_5;
 VAR_6 *= VAR_6;
 VAR_6 *= VAR_6;
 VAR_6 *= VAR_6;
 VAR_7 = 1;
 for (VAR_8=0; VAR_8 < VAR_0; VAR_8++, VAR_7 *= VAR_6) {
  VAR_10[VAR_8] = (VAR_11 + 1)*(1 - VAR_7);
  if (VAR_10[VAR_8] > VAR_11)
   VAR_10[VAR_8] = VAR_11;




 }
 VAR_2->d[0] = VAR_5 * (VAR_11 + 1);
 return 0;
}
