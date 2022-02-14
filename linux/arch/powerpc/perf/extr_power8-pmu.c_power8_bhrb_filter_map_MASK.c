
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_6)
{
 u64 VAR_7 = 0;
 if (VAR_6 & VAR_0)
  return VAR_7;


 if (VAR_6 & VAR_2)
  return -1;

 if (VAR_6 & VAR_4)
  return -1;

 if (VAR_6 & VAR_3)
  return -1;

 if (VAR_6 & VAR_1) {
  VAR_7 |= VAR_5;
  return VAR_7;
 }


 return -1;
}
