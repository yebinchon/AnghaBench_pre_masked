
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_0, int VAR_1)
{
 unsigned int VAR_2 = 0;

 if (!VAR_1)
  return 0;

 switch (VAR_0) {
 case 130:
 case 134:
 case 132:
 case 131:
  VAR_2 = FUNC_0(VAR_1, 128);
  break;
 case 133:
  VAR_2 = FUNC_0(VAR_1, 192);
  VAR_2 = FUNC_0(VAR_2 * 4 / 3, 256);
  break;
 case 128:
  VAR_2 = FUNC_0(VAR_1 * 2, 256);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_1 * 2, 128);
  break;
 }

 return VAR_2;
}
