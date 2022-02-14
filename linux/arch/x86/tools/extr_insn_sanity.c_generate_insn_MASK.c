
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_2)
{
 int VAR_3;

 if (VAR_1)
  return FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3 += 2)
  *(unsigned short *)(&VAR_2[VAR_3]) = FUNC_0() & 0xffff;

 while (VAR_3 < VAR_0)
  VAR_2[VAR_3++] = FUNC_0() & 0xff;

 return VAR_3;
}
