
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

size_t FUNC_1(unsigned char *VAR_2, size_t VAR_3, git_object_t VAR_4)
{
 unsigned char *VAR_5;
 unsigned char VAR_6;

 FUNC_0(VAR_4 >= VAR_0 && VAR_4 <= VAR_1);



 VAR_6 = (unsigned char)((VAR_4 << 4) | (VAR_3 & 15));
 VAR_3 >>= 4;
 VAR_5 = VAR_2;

 while (VAR_3) {
  *VAR_2++ = VAR_6 | 0x80;
  VAR_6 = VAR_3 & 0x7f;
  VAR_3 >>= 7;
 }
 *VAR_2++ = VAR_6;

 return (VAR_2 - VAR_5);
}
