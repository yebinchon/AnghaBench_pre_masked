
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,void const*,unsigned int,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, const void *VAR_2, unsigned int VAR_3,
       const int *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 do {
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6 > 0) {
   VAR_2 += VAR_6;
   VAR_3 -= VAR_6;
   VAR_4 = ((void*)0);
   VAR_5 = 0;
  }
 } while (VAR_3 && (VAR_6 >= 0 || VAR_6 == -VAR_0));

 if (VAR_6 < 0)
  return VAR_6;
 return 0;
}
