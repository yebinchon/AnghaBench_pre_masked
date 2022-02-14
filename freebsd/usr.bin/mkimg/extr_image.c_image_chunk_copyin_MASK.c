
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t off_t ;
typedef scalar_t__ lba_t ;


 int FUNC_0 (scalar_t__,size_t,size_t,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_3(lba_t VAR_1, void *VAR_2, size_t VAR_3, off_t VAR_4, int VAR_5)
{
 uint8_t *VAR_6 = VAR_2;
 int VAR_7;

 VAR_7 = 0;
 VAR_3 = (VAR_3 + VAR_0 - 1) & ~(VAR_0 - 1);
 while (!VAR_7 && VAR_3 > 0) {
  if (FUNC_2(VAR_6))
   VAR_7 = FUNC_1(VAR_1 + 1);
  else
   VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_4, VAR_5);
  VAR_1++;
  VAR_6 += VAR_0;
  VAR_3 -= VAR_0;
  VAR_4 += VAR_0;
 }
 return (VAR_7);
}
