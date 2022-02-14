
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_0(int VAR_3)
{
 u64 VAR_4 = 0;

 if (VAR_3 & 0x1)
  VAR_4 |= VAR_2;
 if (VAR_3 & 0x2)
  VAR_4 |= VAR_1;
 if (VAR_3 & 0x4)
  VAR_4 |= VAR_0;
 return VAR_4;
}
