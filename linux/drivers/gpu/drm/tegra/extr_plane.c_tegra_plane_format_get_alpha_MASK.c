
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int VAR_3 ;

 unsigned int VAR_4 ;


 scalar_t__ FUNC_0 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5,
     unsigned int *VAR_6)
{
 if (FUNC_0(VAR_5, ((void*)0))) {
  *VAR_6 = VAR_5;
  return 0;
 }

 switch (VAR_5) {
 case 132:
  *VAR_6 = VAR_2;
  return 0;

 case 128:
  *VAR_6 = VAR_1;
  return 0;

 case 129:
  *VAR_6 = VAR_4;
  return 0;

 case 130:
  *VAR_6 = VAR_3;
  return 0;

 case 131:
  *VAR_6 = VAR_5;
  return 0;
 }

 return -VAR_0;
}
