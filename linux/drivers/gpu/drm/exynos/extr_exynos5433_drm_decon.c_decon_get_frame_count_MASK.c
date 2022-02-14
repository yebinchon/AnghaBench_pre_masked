
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct decon_context {TYPE_1__* crtc; scalar_t__ addr; } ;
struct TYPE_2__ {int i80_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct decon_context *VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8 = 2;





 VAR_5 = FUNC_0(VAR_3->addr + VAR_0);
 do {
  VAR_7 = FUNC_0(VAR_3->addr + VAR_1);
  VAR_6 = VAR_5;
  VAR_5 = FUNC_0(VAR_3->addr + VAR_0);
 } while (VAR_5 != VAR_6 && --VAR_8);




 if (!VAR_5)
  return 0;

 switch (VAR_7 & (VAR_2 | 131)) {
 case 128:
  if (!(VAR_3->crtc->i80_mode))
   --VAR_5;
  break;
 case 129:
  --VAR_5;
  break;
 case 131:
 case 130:
  if (VAR_4)
   --VAR_5;
  break;
 default:
  break;
 }

 return VAR_5;
}
