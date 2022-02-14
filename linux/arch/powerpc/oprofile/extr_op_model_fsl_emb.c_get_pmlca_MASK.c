
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline u32 FUNC_2(int VAR_6)
{
 u32 VAR_7;

 switch (VAR_6) {
  case 0:
   VAR_7 = FUNC_0(VAR_0);
   break;
  case 1:
   VAR_7 = FUNC_0(VAR_1);
   break;
  case 2:
   VAR_7 = FUNC_0(VAR_2);
   break;
  case 3:
   VAR_7 = FUNC_0(VAR_3);
   break;
  case 4:
   VAR_7 = FUNC_0(VAR_4);
   break;
  case 5:
   VAR_7 = FUNC_0(VAR_5);
   break;
  default:
   FUNC_1("Bad ctr number\n");
 }

 return VAR_7;
}
