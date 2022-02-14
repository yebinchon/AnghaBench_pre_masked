
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static bool FUNC_1(int VAR_0,
         int VAR_1,
         int *VAR_2)
{
 switch (VAR_0) {
 default:
  FUNC_0("invalid link bandwidth in DPCD: %x (link count: %d)\n",
         VAR_0, VAR_1);
  return 0;

 case 131:
  *VAR_2 = 3 * VAR_1;
  break;
 case 130:
  *VAR_2 = 5 * VAR_1;
  break;
 case 129:
  *VAR_2 = 10 * VAR_1;
  break;
 case 128:
  *VAR_2 = 15 * VAR_1;
  break;
 }
 return 1;
}
