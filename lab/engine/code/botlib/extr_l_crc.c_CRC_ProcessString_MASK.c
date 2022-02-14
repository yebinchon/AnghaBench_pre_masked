
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short*) ;
 unsigned short FUNC_1 (unsigned short) ;
 unsigned short* VAR_0 ;

unsigned short FUNC_2(unsigned char *VAR_1, int VAR_2)
{
 unsigned short VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  VAR_5 = (VAR_3 >> 8) ^ VAR_1[VAR_4];
  if (VAR_5 < 0 || VAR_5 > 256) VAR_5 = 0;
  VAR_3 = (VAR_3 << 8) ^ VAR_0[VAR_5];
 }
 return FUNC_1(VAR_3);
}
