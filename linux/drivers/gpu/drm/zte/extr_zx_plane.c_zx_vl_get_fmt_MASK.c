
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_9)
{
 switch (VAR_9) {
 case 134:
  return VAR_1;
 case 131:
  return VAR_4 | VAR_1;
 case 129:
  return VAR_7 | VAR_2;
 case 128:
  return VAR_8 | VAR_2;
 case 133:
  return VAR_5 | VAR_2;
 case 132:
  return VAR_6 | VAR_2;
 case 130:
  return VAR_3;
 default:
  FUNC_0(1, "invalid pixel format %d\n", VAR_9);
  return -VAR_0;
 }
}
