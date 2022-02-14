
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int Down; int Up; int Held1To64; int AreaHeight; int AreaWidth; void* Y; void* X; int Modifiers; } ;
typedef TYPE_1__ uiAreaMouseEvent ;
struct TYPE_10__ {TYPE_3__* ah; } ;
typedef TYPE_2__ uiArea ;
typedef int guint ;
typedef void* gdouble ;
struct TYPE_11__ {int (* MouseEvent ) (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;} ;
typedef int GdkWindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(uiArea *VAR_3, uiAreaMouseEvent *VAR_4, guint VAR_5, gdouble VAR_6, gdouble VAR_7, guint VAR_8, GdkWindow *VAR_9)
{

 if (VAR_5 >= 4 && VAR_5 <= 7)
  return;

 if (VAR_4->Down >= 8)
  VAR_4->Down -= 4;
 if (VAR_4->Up >= 8)
  VAR_4->Up -= 4;

 VAR_8 = FUNC_3(VAR_8, VAR_9);
 VAR_4->Modifiers = FUNC_2(VAR_8);


 VAR_4->Held1To64 = 0;
 if (VAR_5 != 1 && (VAR_8 & VAR_0) != 0)
  VAR_4->Held1To64 |= 1 << 0;
 if (VAR_5 != 2 && (VAR_8 & VAR_1) != 0)
  VAR_4->Held1To64 |= 1 << 1;
 if (VAR_5 != 3 && (VAR_8 & VAR_2) != 0)
  VAR_4->Held1To64 |= 1 << 2;






 VAR_4->X = VAR_6;
 VAR_4->Y = VAR_7;

 FUNC_0(VAR_3, &(VAR_4->AreaWidth), &(VAR_4->AreaHeight));

 (*(VAR_3->ah->MouseEvent))(VAR_3->ah, VAR_3, VAR_4);
}
