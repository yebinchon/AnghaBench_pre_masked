
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_5)
{
 int VAR_6 = -1;

 switch (VAR_5) {
 case 129:
  VAR_6 = VAR_3;
  break;
 case 128:
  VAR_6 = VAR_4;
  break;
 case 131:
  VAR_6 = VAR_1;
  break;
 case 130:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0(
   VAR_0, "invalid config path selector %d", VAR_5);
 }

 return VAR_6;
}
