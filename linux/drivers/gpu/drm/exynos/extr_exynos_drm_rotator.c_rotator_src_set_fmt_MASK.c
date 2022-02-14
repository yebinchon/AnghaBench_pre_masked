
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rot_context {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct rot_context *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 VAR_6 &= ~VAR_1;

 switch (VAR_5) {
 case 129:
  VAR_6 |= VAR_3;
  break;
 case 128:
  VAR_6 |= VAR_2;
  break;
 }

 FUNC_1(VAR_6, VAR_0);
}
