
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_2(unsigned long VAR_0, int VAR_1)
{
 unsigned long VAR_2 = 0;
 unsigned char *VAR_3, *VAR_4;
 int VAR_5 = 0;

 VAR_0 = FUNC_0(VAR_0);

 VAR_3 = (void *)&VAR_0;
 VAR_4 = (void *)&VAR_2;

 while (VAR_5++ < VAR_1)
  *VAR_4++ = *VAR_3++;

 if (((*(VAR_4 - 1)) & 0x80) && (VAR_5 < 4)) {

  while (VAR_5++ <= 4)
   *VAR_4++ = 0xff;
 }

 return FUNC_1(VAR_2);
}
