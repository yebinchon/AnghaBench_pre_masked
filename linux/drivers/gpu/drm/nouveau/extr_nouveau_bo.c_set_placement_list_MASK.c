
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_place {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct ttm_place *VAR_3, unsigned *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 *VAR_4 = 0;

 if (VAR_5 & VAR_2)
  VAR_3[(*VAR_4)++].flags = VAR_2 | VAR_6;
 if (VAR_5 & VAR_1)
  VAR_3[(*VAR_4)++].flags = VAR_1 | VAR_6;
 if (VAR_5 & VAR_0)
  VAR_3[(*VAR_4)++].flags = VAR_0 | VAR_6;
}
