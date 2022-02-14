
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chksum ;



int FUNC_0(void *VAR_0,
     unsigned long VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2;
 unsigned long VAR_5 = 0;
 unsigned char *VAR_6;

 VAR_6 = (char *)VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  VAR_4 += *(VAR_6 + VAR_5);

 VAR_6 = (char *)&VAR_3;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_3); ++VAR_5)
  VAR_4 -= *(VAR_6 + VAR_5);
 return VAR_4;
}
