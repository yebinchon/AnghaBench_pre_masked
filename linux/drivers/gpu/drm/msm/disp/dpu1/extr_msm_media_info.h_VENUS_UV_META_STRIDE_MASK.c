
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static unsigned int FUNC_2(int VAR_0, int VAR_1)
{
 int VAR_2 = 0, VAR_3;

 if (!VAR_1)
  return 0;

 switch (VAR_0) {
 case 129:
 case 128:
  VAR_2 = 16;
  break;
 case 130:
  VAR_2 = 24;
  break;
 default:
  return 0;
 }

 VAR_3 = FUNC_1((VAR_1+1)>>1, VAR_2);
 return FUNC_0(VAR_3, 64);
}
