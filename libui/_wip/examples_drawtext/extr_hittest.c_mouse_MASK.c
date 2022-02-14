
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiDrawTextLayout ;
struct TYPE_5__ {int Down; scalar_t__ Y; scalar_t__ X; scalar_t__ AreaWidth; } ;
typedef TYPE_1__ uiAreaMouseEvent ;
struct TYPE_6__ {scalar_t__ Width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__*,int*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(uiAreaMouseEvent *VAR_5)
{
 uiDrawTextLayout *VAR_6;
 char VAR_7[128];

 if (VAR_5->Down != 1)
  return;

 VAR_4.Width = VAR_5->AreaWidth - 2 * VAR_3;
 VAR_6 = FUNC_3(&VAR_4);
 FUNC_4(VAR_6,
  VAR_5->X - VAR_3, VAR_5->Y - VAR_3,
  &VAR_2, &VAR_1);
 FUNC_2(VAR_6);




 FUNC_1(VAR_7, "pos %d line %d",
  (int) VAR_2, VAR_1);
 FUNC_5(VAR_0, VAR_7);

 FUNC_0();
}
