
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_gmu {int idle_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct a6xx_gmu*) ;
 int FUNC_1 (struct a6xx_gmu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct a6xx_gmu *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = VAR_3->idle_level;


 if (VAR_3->idle_level == VAR_1)
  VAR_5 = VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (VAR_4 == VAR_5) {
  if (VAR_3->idle_level != VAR_0 ||
   !FUNC_0(VAR_3))
   return 1;
 }

 return 0;
}
