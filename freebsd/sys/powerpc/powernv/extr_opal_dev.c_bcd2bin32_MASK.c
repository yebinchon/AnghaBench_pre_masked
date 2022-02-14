
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0)
{
 int VAR_1 = 0;

 VAR_1 += FUNC_0(VAR_0 & 0xff);
 VAR_1 += 100*FUNC_0((VAR_0 & 0x0000ff00) >> 8);
 VAR_1 += 10000*FUNC_0((VAR_0 & 0x00ff0000) >> 16);
 VAR_1 += 1000000*FUNC_0((VAR_0 & 0xffff0000) >> 24);

 return (VAR_1);
}
