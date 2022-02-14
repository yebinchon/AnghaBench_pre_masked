
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int height; } ;
struct TYPE_3__ {int lfb_linelength; int lfb_height; } ;


 unsigned long* FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long*,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (unsigned long*,unsigned long*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long *VAR_2, *VAR_3;
 u16 VAR_4;
 u32 VAR_5, VAR_6;

 VAR_4 = VAR_1.lfb_linelength;
 VAR_6 = VAR_1.lfb_height;

 for (VAR_5 = 0; VAR_5 < VAR_6 - VAR_0->height; VAR_5++) {
  VAR_2 = FUNC_0(VAR_5*VAR_4, VAR_4);
  if (!VAR_2)
   return;

  VAR_3 = FUNC_0((VAR_5 + VAR_0->height) * VAR_4, VAR_4);
  if (!VAR_3) {
   FUNC_1(VAR_2, VAR_4);
   return;
  }

  FUNC_2(VAR_2, VAR_3, VAR_4);

  FUNC_1(VAR_3, VAR_4);
  FUNC_1(VAR_2, VAR_4);
 }
}
