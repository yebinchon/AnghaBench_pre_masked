
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_9)
{
 u32 VAR_10 = 0;

 switch (VAR_9 & VAR_2) {
 case 131:
  VAR_10 |= FUNC_0(VAR_4);
  break;
 case 128:
  VAR_10 |= FUNC_0(VAR_7);
  break;
 case 130:
  VAR_10 |= FUNC_0(VAR_5);
  break;
 case 129:
  VAR_10 |= FUNC_0(VAR_6);
  break;
 }

 if (VAR_9 & VAR_0)
  VAR_10 |= VAR_3;
 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_8;

 return VAR_10;
}
