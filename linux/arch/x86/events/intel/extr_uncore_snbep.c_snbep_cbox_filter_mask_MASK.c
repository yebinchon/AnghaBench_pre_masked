
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u64 FUNC_0(int VAR_4)
{
 u64 VAR_5 = 0;

 if (VAR_4 & 0x1)
  VAR_5 |= VAR_3;
 if (VAR_4 & 0x2)
  VAR_5 |= VAR_0;
 if (VAR_4 & 0x4)
  VAR_5 |= VAR_2;
 if (VAR_4 & 0x8)
  VAR_5 |= VAR_1;

 return VAR_5;
}
