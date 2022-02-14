
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
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_6)
{
 switch (VAR_6) {
 case 131:
 case 128:
  return VAR_3;
 case 129:
  return VAR_5;
 case 130:
  return VAR_4;
 case 133:
  return VAR_1;
 case 132:
  return VAR_2;
 default:
  FUNC_0(1, "invalid pixel format %d\n", VAR_6);
  return -VAR_0;
 }
}
