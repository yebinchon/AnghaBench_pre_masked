
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_lvds {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rcar_lvds*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rcar_lvds *VAR_5, unsigned int VAR_6)
{
 u32 VAR_7;

 if (VAR_6 < 42000000)
  VAR_7 = VAR_3;
 else if (VAR_6 < 85000000)
  VAR_7 = VAR_4;
 else if (VAR_6 < 128000000)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 FUNC_0(VAR_5, VAR_0, VAR_7);
}
