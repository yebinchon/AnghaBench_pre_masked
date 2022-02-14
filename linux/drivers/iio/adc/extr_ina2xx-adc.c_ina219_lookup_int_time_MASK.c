
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,unsigned int*,int ) ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static int FUNC_2(unsigned int *VAR_3, int *VAR_4)
{
 if (*VAR_3 > 68100 || *VAR_3 < 84)
  return -VAR_0;

 if (*VAR_3 <= 532) {
  *VAR_4 = FUNC_1(*VAR_3, VAR_2,
        FUNC_0(VAR_2));
  *VAR_3 = VAR_2[*VAR_4];
 } else {
  *VAR_4 = FUNC_1(*VAR_3, VAR_1,
        FUNC_0(VAR_1));
  *VAR_3 = VAR_1[*VAR_4];
  *VAR_4 |= 0x8;
 }

 return 0;
}
