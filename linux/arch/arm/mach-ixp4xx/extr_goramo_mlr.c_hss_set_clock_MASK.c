
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, unsigned int VAR_4)
{
 int VAR_5 = VAR_3 ? VAR_1 : VAR_0;

 switch (VAR_4) {
 case 130:
 case 129:
  FUNC_1(VAR_5, 0);
  FUNC_0();
  return 129;

 case 128:
  FUNC_1(VAR_5, 1);
  FUNC_0();
  return 128;

 default:
  return -VAR_2;
 }
}
