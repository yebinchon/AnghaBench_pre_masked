
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 size_t VAR_0 ;
 int * FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_2(int VAR_1, void **VAR_2)
{
 uint8_t *VAR_3;
 size_t VAR_4;
 off_t VAR_5;
 ssize_t VAR_6;

 VAR_4 = VAR_0;
 VAR_5 = 0;
 VAR_3 = FUNC_0(VAR_4);
 do {
  VAR_6 = FUNC_1(VAR_1, VAR_3 + VAR_5, VAR_4 - VAR_5);
  if (VAR_6 == 0)
   break;
  VAR_5 += VAR_6;
  if (VAR_5 == (off_t)VAR_4)
   break;
 } while (1);
 *VAR_2 = VAR_3;

 return VAR_5;
}
