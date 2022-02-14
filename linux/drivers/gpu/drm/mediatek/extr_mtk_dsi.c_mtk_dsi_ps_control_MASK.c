
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hactive; } ;
struct mtk_dsi {int format; scalar_t__ regs; TYPE_1__ vm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_dsi *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 switch (VAR_6->format) {
 case 128:
  VAR_8 = VAR_5;
  VAR_7 = 3;
  break;
 case 130:
  VAR_8 = VAR_2;
  VAR_7 = 3;
  break;
 case 129:
  VAR_8 = VAR_4;
  VAR_7 = 3;
  break;
 case 131:
  VAR_8 = VAR_3;
  VAR_7 = 2;
  break;
 default:
  VAR_8 = VAR_5;
  VAR_7 = 3;
  break;
 }

 VAR_8 += VAR_6->vm.hactive * VAR_7 & VAR_1;
 FUNC_0(VAR_8, VAR_6->regs + VAR_0);
}
