
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;
typedef int ULong ;
typedef int Bigint ;


 scalar_t__ FUNC_0 (struct dtoa_context*,int) ;

__attribute__((used)) static char *
FUNC_1(struct dtoa_context* VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, *VAR_4;

 VAR_2 = sizeof(ULong);
 for(VAR_3 = 0;
            (int)(sizeof(Bigint) - sizeof(ULong) - sizeof(int)) + VAR_2 <= VAR_1;
  VAR_2 <<= 1)
   VAR_3++;
 VAR_4 = (int*)FUNC_0(VAR_0, VAR_3);
 *VAR_4 = VAR_3;
 return
  (char *)(VAR_4+1);
 }
