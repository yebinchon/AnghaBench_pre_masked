
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv090x_state {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct stv090x_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct stv090x_state*,scalar_t__) ;
 int FUNC_4 (struct stv090x_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct stv090x_state *VAR_2, s32 VAR_3, s32 VAR_4)
{
 u32 VAR_5;
 s32 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (VAR_7)
  VAR_7 = FUNC_4(VAR_2, VAR_4);

 if (VAR_7) {
  VAR_7 = 0;

  while ((VAR_6 < VAR_4) && (!VAR_7)) {
   VAR_5 = FUNC_1(VAR_2, VAR_1);
   VAR_7 = FUNC_0(VAR_5, VAR_0);
   FUNC_2(1);
   VAR_6++;
  }
 }

 return VAR_7;
}
