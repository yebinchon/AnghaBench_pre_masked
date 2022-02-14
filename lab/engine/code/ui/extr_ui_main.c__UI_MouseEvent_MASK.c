
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bias; int xscale; int cursorx; scalar_t__ cursory; } ;
struct TYPE_4__ {TYPE_1__ uiDC; } ;


 int FUNC_0 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_2( int VAR_3, int VAR_4 )
{
 int VAR_5;


 VAR_5 = VAR_2.uiDC.bias / VAR_2.uiDC.xscale;


 VAR_2.uiDC.cursorx += VAR_3;
 if (VAR_2.uiDC.cursorx < -VAR_5)
  VAR_2.uiDC.cursorx = -VAR_5;
 else if (VAR_2.uiDC.cursorx > VAR_1+VAR_5)
  VAR_2.uiDC.cursorx = VAR_1+VAR_5;

 VAR_2.uiDC.cursory += VAR_4;
 if (VAR_2.uiDC.cursory < 0)
  VAR_2.uiDC.cursory = 0;
 else if (VAR_2.uiDC.cursory > VAR_0)
  VAR_2.uiDC.cursory = VAR_0;

  if (FUNC_1() > 0) {


  FUNC_0(((void*)0), VAR_2.uiDC.cursorx, VAR_2.uiDC.cursory);
  }

}
