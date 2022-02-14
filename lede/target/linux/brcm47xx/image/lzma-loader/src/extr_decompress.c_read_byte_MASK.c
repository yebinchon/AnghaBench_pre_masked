
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3, unsigned char **VAR_4, UInt32 *VAR_5)
{
 static unsigned int VAR_6;

 if (((unsigned int)VAR_2 % 4) == 0) {
  VAR_6 = *(unsigned int *)VAR_1;
  VAR_1 += 4;
 }

 *VAR_5 = 1;
 *VAR_4 = ((unsigned char *)&VAR_6) + (VAR_2++ & 3);

 return VAR_0;
}
