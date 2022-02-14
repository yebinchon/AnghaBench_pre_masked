
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ VAR_0 ;

unsigned char FUNC_3(unsigned char VAR_1)
{
 unsigned char VAR_2;


 if (VAR_1 > 0xd || !VAR_0)
  return 0xff;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_0 + (VAR_1 << 2));
 FUNC_2(VAR_1);
 return VAR_2;
}
