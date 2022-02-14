
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int FUNC_0 (char*,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, char *VAR_1)
{
 __u8 VAR_2 = (VAR_0[1] & 0x0e) >> 1;
 __u8 VAR_3 = (VAR_0[0] & 0x3c) >> 2;
 __u8 VAR_4 = ((VAR_0[0] & 0x03) << 3) | ((VAR_0[3] & 0xe0) >> 5);
 __u8 VAR_5 = ((VAR_0[3] & 0x07) << 3) | ((VAR_0[2] & 0xe0) >> 5);
 __u8 VAR_6 = VAR_0[2] & 0x07;






 return FUNC_0(VAR_1, "%u.%u.%u.%u.%u", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
