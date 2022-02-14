
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_1(int VAR_3)
{
 int VAR_4;

 VAR_3 >>= 2;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 < VAR_1)
   return VAR_2[VAR_4];
 }

 return VAR_0;
}
