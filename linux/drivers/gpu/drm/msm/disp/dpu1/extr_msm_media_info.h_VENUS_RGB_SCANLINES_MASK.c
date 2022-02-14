
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;

 if (!VAR_1)
  return 0;

 switch (VAR_0) {
 case 129:
  VAR_2 = 32;
  break;
 case 128:
 case 130:
 case 131:
  VAR_2 = 16;
  break;
 default:
  return 0;
 }

 return FUNC_0(VAR_1, VAR_2);
}
