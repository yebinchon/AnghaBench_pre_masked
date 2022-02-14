
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 int* VAR_0 ;

__u16 FUNC_0(__u16 VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++)
  VAR_1 = (VAR_1 << 8) ^ VAR_0[((VAR_1 >> 8) ^ VAR_2[VAR_4]) & 0xff];

 return VAR_1;
}
