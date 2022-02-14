
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct bcm3510_state {int dummy; } ;
struct TYPE_3__ {int MADRH_a9; int MADRL_aa; int MDATA_ab; } ;
typedef TYPE_1__ bcm3510_register_value ;


 int FUNC_0 (struct bcm3510_state*,int,TYPE_1__) ;

__attribute__((used)) static int FUNC_1(struct bcm3510_state *VAR_0, u16 VAR_1, const u8 *VAR_2,
        u16 VAR_3)
{
 int VAR_4 = 0,VAR_5;
 bcm3510_register_value VAR_6, VAR_7,VAR_8;

 VAR_6.MADRH_a9 = VAR_1 >> 8;
 VAR_7.MADRL_aa = VAR_1;
 if ((VAR_4 = FUNC_0(VAR_0,0xa9,VAR_6)) < 0) return VAR_4;
 if ((VAR_4 = FUNC_0(VAR_0,0xaa,VAR_7)) < 0) return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_8.MDATA_ab = VAR_2[VAR_5];
  if ((VAR_4 = FUNC_0(VAR_0,0xab,VAR_8)) < 0)
   return VAR_4;
 }

 return 0;
}
