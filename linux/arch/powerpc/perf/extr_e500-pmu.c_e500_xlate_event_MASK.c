
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_5)
{
 u32 VAR_6 = (u32)VAR_5;
 u64 VAR_7;

 if (VAR_6 >= VAR_4)
  return 0;

 VAR_7 = VAR_3;

 if (VAR_6 >= 76 && VAR_6 <= 81) {
  VAR_7 |= VAR_0;
  VAR_7 |= VAR_5 &
         (VAR_2 | VAR_1);
 } else if (VAR_5 &
            (VAR_2 | VAR_1)) {

  return 0;
 }

 return VAR_7;
}
