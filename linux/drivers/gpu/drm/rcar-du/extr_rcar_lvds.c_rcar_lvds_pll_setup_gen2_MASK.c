
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rcar_lvds*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rcar_lvds *VAR_7, unsigned int VAR_8)
{
 u32 VAR_9;

 if (VAR_8 < 39000000)
  VAR_9 = VAR_1 | VAR_2 | VAR_5;
 else if (VAR_8 < 61000000)
  VAR_9 = VAR_1 | VAR_2 | VAR_6;
 else if (VAR_8 < 121000000)
  VAR_9 = VAR_1 | VAR_2 | VAR_3;
 else
  VAR_9 = VAR_4;

 FUNC_0(VAR_7, VAR_0, VAR_9);
}
