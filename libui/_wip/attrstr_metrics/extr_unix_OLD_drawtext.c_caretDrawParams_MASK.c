
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int style; } ;
typedef TYPE_1__ uiDrawContext ;
struct caretDrawParams {double r; double g; double b; double a; int xoff; int width; } ;
typedef int gint ;
typedef double gfloat ;
struct TYPE_10__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
struct TYPE_9__ {double red; double green; double blue; double alpha; } ;
typedef TYPE_2__ GdkRGBA ;
typedef TYPE_3__ GdkColor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,TYPE_3__**,char*,double*,int *) ;

void FUNC_3(uiDrawContext *VAR_1, double VAR_2, struct caretDrawParams *VAR_3)
{
 GdkColor *VAR_4;
 GdkRGBA VAR_5;
 gfloat VAR_6;
 gint VAR_7, VAR_8;

 FUNC_2(VAR_1->style,
  "cursor-color", &VAR_4,
  "cursor-aspect-ratio", &VAR_6,
  ((void*)0));
 if (VAR_4 != ((void*)0)) {
  VAR_3->r = ((double) (VAR_4->red)) / 65535.0;
  VAR_3->g = ((double) (VAR_4->green)) / 65535.0;
  VAR_3->b = ((double) (VAR_4->blue)) / 65535.0;
  VAR_3->a = 1.0;
  FUNC_0(VAR_4);
 } else {
  FUNC_1(VAR_1->style, VAR_0, &VAR_5);
  VAR_3->r = VAR_5.red;
  VAR_3->g = VAR_5.green;
  VAR_3->b = VAR_5.blue;
  VAR_3->a = VAR_5.alpha;
 }


 VAR_7 = VAR_2 * VAR_6 + 1;

 VAR_8 = VAR_7 / 2;

 VAR_3->xoff = VAR_8;
 VAR_3->width = VAR_7;
}
