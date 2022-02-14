
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stv090x_state *VAR_6, s32 VAR_7)
{
 s32 VAR_8 = 0, VAR_9 = 0, VAR_10;
 u32 VAR_11;

 while ((VAR_8 < VAR_7) && (!VAR_9)) {
  VAR_11 = FUNC_1(VAR_6, VAR_0);
  VAR_10 = FUNC_0(VAR_11, VAR_1);

  switch (VAR_10) {
  case 0:
  case 1:
  default:
   VAR_9 = 0;
   break;

  case 2:
   VAR_11 = FUNC_1(VAR_6, VAR_3);
   VAR_9 = FUNC_0(VAR_11, VAR_4);
   break;

  case 3:
   VAR_11 = FUNC_1(VAR_6, VAR_5);
   VAR_9 = FUNC_0(VAR_11, VAR_2);
   break;
  }
  if (!VAR_9) {
   FUNC_2(10);
   VAR_8 += 10;
  }
 }
 return VAR_9;
}
