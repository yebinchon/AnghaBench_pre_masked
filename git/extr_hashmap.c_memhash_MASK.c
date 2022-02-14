
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

unsigned int FUNC_0(const void *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = VAR_0;
 unsigned char *VAR_5 = (unsigned char *) VAR_2;
 while (VAR_3--) {
  unsigned int VAR_6 = *VAR_5++;
  VAR_4 = (VAR_4 * VAR_1) ^ VAR_6;
 }
 return VAR_4;
}
