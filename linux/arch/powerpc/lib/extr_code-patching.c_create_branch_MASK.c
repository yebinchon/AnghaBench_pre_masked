
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (long) ;

unsigned int FUNC_1(const unsigned int *VAR_1,
      unsigned long VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 long VAR_5;

 VAR_5 = VAR_2;
 if (! (VAR_3 & VAR_0))
  VAR_5 = VAR_5 - (unsigned long)VAR_1;


 if (!FUNC_0(VAR_5))
  return 0;


 VAR_4 = 0x48000000 | (VAR_3 & 0x3) | (VAR_5 & 0x03FFFFFC);

 return VAR_4;
}
