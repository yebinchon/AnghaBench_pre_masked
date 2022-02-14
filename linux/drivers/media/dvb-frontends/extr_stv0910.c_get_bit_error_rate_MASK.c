
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv {int receive_mode; } ;




 int FUNC_0 (struct stv*,int*,int*) ;
 int FUNC_1 (struct stv*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_0, u32 *VAR_1,
         u32 *VAR_2)
{
 *VAR_1 = 0;
 *VAR_2 = 1;

 switch (VAR_0->receive_mode) {
 case 129:
  return FUNC_0(VAR_0,
         VAR_1, VAR_2);
 case 128:
  return FUNC_1(VAR_0,
          VAR_1, VAR_2);
 default:
  break;
 }
 return 0;
}
